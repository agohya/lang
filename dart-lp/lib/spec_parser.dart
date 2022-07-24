import 'dart:io';

import 'package:yaml/yaml.dart';

class SpecParser {
  final String specPath;

  SpecParser({required this.specPath});

  ProjSpec? spec;

  Future<SpecParser> parseSpec() async {
    File file = File(specPath);
    final yaml = loadYaml(await file.readAsString()) as Map;
    spec = ProjSpec.fromMap(yaml);
    return this;
  }
}

class ProjSpec {
  ProjSpec._();

  factory ProjSpec.fromMap(Map map) {
    return ProjSpec._();
  }
}
