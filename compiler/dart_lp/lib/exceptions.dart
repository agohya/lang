class FileNotSetException {
  @override
  String toString() {
    return "Error! No file was set for the compiler to compile! Please set a file using setFile(String file) or setAndLoadFile(String file).";
  }
}
