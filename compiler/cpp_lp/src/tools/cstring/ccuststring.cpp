#include "ccuststring.h"

template <typename... TArgs>
std::string CString::format(const std::string& aFormat, TArgs&&... aArgs) {
  std::array<std::string, sizeof...(aArgs)> formattedArguments{};

  formatArguments(formattedArguments, std::forward<TArgs>(aArgs)...);

  if constexpr (sizeof...(aArgs) == 0) {
    return aFormat;
  } else {
    uint32_t number = 0;
    bool readNumber = false;

    std::ostringstream stream;

    for (std::size_t k = 0; k < aFormat.size(); ++k) {
      switch (aFormat[k]) {
        case '%':
          readNumber = true;
          break;
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
// Desired behaviour to enable reading numbers in text w/o preceding %
#pragma GCC diagnostic ignored "-Wimplicit-fallthrough"
          if (readNumber) {
            number *= 10;
            number += static_cast<uint32_t>(aFormat[k] - '0');
            break;
          }
        default:
          if (readNumber) {
            stream << formattedArguments[std::size_t(number)];
            readNumber = false;
            number = 0;
          }

          stream << aFormat[k];
          break;
#pragma GCC diagnostic warning "-Wimplicit-fallthrough"
      }
    }

    if (readNumber) {
      stream << formattedArguments[std::size_t(number)];
      readNumber = false;
      number = 0;
    }

    return stream.str();
  }
}
//<-----------------------------------------------------------------------------

//<-----------------------------------------------------------------------------
//<
//<-----------------------------------------------------------------------------
template <typename TArg, typename enable>
std::string CString::toString(TArg const& aArg) {
  std::ostringstream stream;
  stream << aArg;
  return stream.str();
}
//<-----------------------------------------------------------------------------

//<-----------------------------------------------------------------------------
//<
//<-----------------------------------------------------------------------------
template <
    typename TArg,
    typename std::enable_if<std::is_floating_point<TArg>::value, TArg>::type>
std::string CString::toString(const float& arg) {
  std::ostringstream stream;
  stream << std::setprecision(12) << arg;
  return stream.str();
}
//<-----------------------------------------------------------------------------

//<-----------------------------------------------------------------------------
//<
//<-----------------------------------------------------------------------------
template <std::size_t argCount>
void CString::formatArguments(std::array<std::string, argCount> const& aArgs) {
  // Unused: aArgs
}
//<-----------------------------------------------------------------------------

//<-----------------------------------------------------------------------------
//<
//<-----------------------------------------------------------------------------
template <std::size_t argCount, typename TArg, typename... TArgs>
void CString::formatArguments(std::array<std::string, argCount>& outFormatted,
                              TArg&& inArg,
                              TArgs&&... inArgs) {
  // Executed for each, recursively until there's no param left.
  uint32_t const index = (argCount - 1 - sizeof...(TArgs));
  outFormatted[index] = toString(inArg);

  formatArguments(outFormatted, std::forward<TArgs>(inArgs)...);
}
//<-----------------------------------------------------------------------------

//<-----------------------------------------------------------------------------
//<
//<-----------------------------------------------------------------------------
template <typename TData,
          typename std::enable_if<std::is_integral<TData>::value ||
                                      std::is_floating_point<TData>::value,
                                  TData>::type>
TData CString::fromString(std::string const& aString) {
  TData const result{};

  std::stringstream ss(aString);
  ss >> result;

  return result;
}