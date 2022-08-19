#include <iostream>
#include "compiler/compiler.h"

void usage() {
  std::cout << R"(Usage:
                -h OR --help: Prints this usage/help message
                ---------------------------------------------------------------------
                -p | --project: The path to the Project, if any, to compile and not a File.
                -f | --file: The path to the File to compile, if not compiling a Project.
                ---------------------------------------------------------------------
                When run, one of the above must be provided.
                You can use '.' to pass the current directory to -p or --project.
                ---------------------------------------------------------------------
                -o | --outdir: The output directory to put the compiled file in
                -v | --verbose: Enable noisy OR verbose logging
                --version: Get the compiler version
                --a-version: Get Agohya Version
  )" << std::endl;
}

int main(int argc, char const* argv[]) {
  if (argc == 1) {
    usage();
    exit(1);
    return 1;
  }
  Compiler compiler = Compiler("NIL", {"./file.agco"}, true);
  if (!compiler.compile()) {
    std::cerr << "ERROR " << compiler.lastError->friendlyString() << std::endl;
  }
  return 0;
}
