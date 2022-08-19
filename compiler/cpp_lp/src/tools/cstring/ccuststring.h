#include <iostream>
#include <utility>

class CString {
 public:
  /**
   * Format a string based on 'aFormat' with a variadic number of arbitrarily
   * typed arguments.
   *
   * @param aFormat
   * @param aArguments
   * @return
   */
  template <typename... TArgs>
  static std::string format(std::string const& aFormat, TArgs&&... aArguments);

  /**
   * Accept an arbitrarily typed argument and convert it to it's proper
   * string representation.
   *
   * @tparam TArg
   * @tparam TEnable
   * @param aArg
   * @return
   */
  template <typename TArg, typename TEnable = void>
  static std::string toString(TArg const& aArg);

  /**
   * Accept a float argument and convert it to it's proper string
   * representation.
   *
   * @tparam TArg
   * @param arg
   * @return
   */
  template <
      typename TArg,
      typename std::enable_if<std::is_floating_point<TArg>::value, TArg>::type>
  static std::string toString(const float& arg);

  /**
   * Convert a string into an arbitrarily typed representation.
   *
   * @param aString
   * @return
   */
  template <typename TData, typename TEnable = void>
  static TData const fromString(std::string const& aString);

  template <typename TData,
            typename std::enable_if<std::is_integral<TData>::value ||
                                        std::is_floating_point<TData>::value,
                                    TData>::type>
  static TData fromString(std::string const& aString);

 private:
  /**
   * Format a list of arguments. In this case zero arguments as the
   * abort-condition of the recursive expansion of the parameter pack.
   *
   * @param aArguments
   */
  template <std::size_t NArgs>
  static void formatArguments(std::array<std::string, NArgs> const& aArguments);

  /**
   * Format a list of arguments of arbitrary type and expand recursively.
   *
   * @param outFormatted
   * @param inArg
   * @param inArgs
   */
  template <std::size_t NArgs, typename TArg, typename... TArgs>
  static void formatArguments(std::array<std::string, NArgs>& aOutFormatted,
                              TArg&& aInArg,
                              TArgs&&... aInArgs);
};