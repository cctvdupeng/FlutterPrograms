// GENERATED CODE - DO NOT MODIFY BY HAND

part of 'spec.dart';

// **************************************************************************
// JsonSerializableGenerator
// **************************************************************************

Spec _$SpecFromJson(Map<String, dynamic> json) {
  return Spec(
      json['flutterVersion'] as String,
      json['name'] as String,
      json['id'] as String,
      json['version'] as String,
      json['author'] as String,
      json['description'] as String,
      json['iconUrl'] as String,
      json['images'],
      json['flutterAssertUrl'] as String,
      json['flutterAssertMD5'] as String,
      json['github'] as String,
      json['feature'] as String,
      json['versionRecord'])
    ..canUpdate = json['canUpdate'] as bool;
}

Map<String, dynamic> _$SpecToJson(Spec instance) => <String, dynamic>{
      'flutterVersion': instance.flutterVersion,
      'name': instance.name,
      'id': instance.id,
      'version': instance.version,
      'author': instance.author,
      'description': instance.description,
      'iconUrl': instance.iconUrl,
      'images': instance.images,
      'flutterAssertUrl': instance.flutterAssertUrl,
      'flutterAssertMD5': instance.flutterAssertMD5,
      'github': instance.github,
      'feature': instance.feature,
      'versionRecord': instance.versionRecord,
      'canUpdate': instance.canUpdate
    };
