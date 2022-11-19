// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MODEL_MYGAME_SAMPLE_H_
#define FLATBUFFERS_GENERATED_MODEL_MYGAME_SAMPLE_H_

#include "flatbuffers/flatbuffers.h"

namespace TheGame {
namespace Sample {

struct Mat4f;

struct Vec2f;

struct Vec3f;

struct Vec4f;

struct Quatf;

struct DefaultVertex;

struct NodeData;

struct Node;
struct NodeBuilder;

struct Mesh;
struct MeshBuilder;

struct BoneToName;
struct BoneToNameBuilder;

struct Model;
struct ModelBuilder;

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Mat4f FLATBUFFERS_FINAL_CLASS {
 private:
  float m_[16];

 public:
  Mat4f()
      : m_() {
  }
  Mat4f(flatbuffers::span<const float, 16> _m) {
    flatbuffers::CastToArray(m_).CopyFromSpan(_m);
  }
  const flatbuffers::Array<float, 16> *m() const {
    return &flatbuffers::CastToArray(m_);
  }
};
FLATBUFFERS_STRUCT_END(Mat4f, 64);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vec2f FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;

 public:
  Vec2f()
      : x_(0),
        y_(0) {
  }
  Vec2f(float _x, float _y)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
};
FLATBUFFERS_STRUCT_END(Vec2f, 8);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vec3f FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;

 public:
  Vec3f()
      : x_(0),
        y_(0),
        z_(0) {
  }
  Vec3f(float _x, float _y, float _z)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
};
FLATBUFFERS_STRUCT_END(Vec3f, 12);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Vec4f FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  float w_;

 public:
  Vec4f()
      : x_(0),
        y_(0),
        z_(0),
        w_(0) {
  }
  Vec4f(float _x, float _y, float _z, float _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  float w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
FLATBUFFERS_STRUCT_END(Vec4f, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) Quatf FLATBUFFERS_FINAL_CLASS {
 private:
  float x_;
  float y_;
  float z_;
  float w_;

 public:
  Quatf()
      : x_(0),
        y_(0),
        z_(0),
        w_(0) {
  }
  Quatf(float _x, float _y, float _z, float _w)
      : x_(flatbuffers::EndianScalar(_x)),
        y_(flatbuffers::EndianScalar(_y)),
        z_(flatbuffers::EndianScalar(_z)),
        w_(flatbuffers::EndianScalar(_w)) {
  }
  float x() const {
    return flatbuffers::EndianScalar(x_);
  }
  float y() const {
    return flatbuffers::EndianScalar(y_);
  }
  float z() const {
    return flatbuffers::EndianScalar(z_);
  }
  float w() const {
    return flatbuffers::EndianScalar(w_);
  }
};
FLATBUFFERS_STRUCT_END(Quatf, 16);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) DefaultVertex FLATBUFFERS_FINAL_CLASS {
 private:
  TheGame::Sample::Vec4f position_;
  TheGame::Sample::Vec4f color_;
  TheGame::Sample::Vec4f normal_;
  TheGame::Sample::Vec4f tangent_;
  TheGame::Sample::Vec4f binormal_;
  TheGame::Sample::Vec4f bones_;
  TheGame::Sample::Vec4f weights_;
  TheGame::Sample::Vec2f uvs_;

 public:
  DefaultVertex()
      : position_(),
        color_(),
        normal_(),
        tangent_(),
        binormal_(),
        bones_(),
        weights_(),
        uvs_() {
  }
  DefaultVertex(const TheGame::Sample::Vec4f &_position, const TheGame::Sample::Vec4f &_color, const TheGame::Sample::Vec4f &_normal, const TheGame::Sample::Vec4f &_tangent, const TheGame::Sample::Vec4f &_binormal, const TheGame::Sample::Vec4f &_bones, const TheGame::Sample::Vec4f &_weights, const TheGame::Sample::Vec2f &_uvs)
      : position_(_position),
        color_(_color),
        normal_(_normal),
        tangent_(_tangent),
        binormal_(_binormal),
        bones_(_bones),
        weights_(_weights),
        uvs_(_uvs) {
  }
  const TheGame::Sample::Vec4f &position() const {
    return position_;
  }
  const TheGame::Sample::Vec4f &color() const {
    return color_;
  }
  const TheGame::Sample::Vec4f &normal() const {
    return normal_;
  }
  const TheGame::Sample::Vec4f &tangent() const {
    return tangent_;
  }
  const TheGame::Sample::Vec4f &binormal() const {
    return binormal_;
  }
  const TheGame::Sample::Vec4f &bones() const {
    return bones_;
  }
  const TheGame::Sample::Vec4f &weights() const {
    return weights_;
  }
  const TheGame::Sample::Vec2f &uvs() const {
    return uvs_;
  }
};
FLATBUFFERS_STRUCT_END(DefaultVertex, 120);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(4) NodeData FLATBUFFERS_FINAL_CLASS {
 private:
  TheGame::Sample::Vec3f position_;
  TheGame::Sample::Quatf rotation_;
  TheGame::Sample::Vec3f scale_;
  int32_t parent_node_index_;

 public:
  NodeData()
      : position_(),
        rotation_(),
        scale_(),
        parent_node_index_(0) {
  }
  NodeData(const TheGame::Sample::Vec3f &_position, const TheGame::Sample::Quatf &_rotation, const TheGame::Sample::Vec3f &_scale, int32_t _parent_node_index)
      : position_(_position),
        rotation_(_rotation),
        scale_(_scale),
        parent_node_index_(flatbuffers::EndianScalar(_parent_node_index)) {
  }
  const TheGame::Sample::Vec3f &position() const {
    return position_;
  }
  const TheGame::Sample::Quatf &rotation() const {
    return rotation_;
  }
  const TheGame::Sample::Vec3f &scale() const {
    return scale_;
  }
  int32_t parent_node_index() const {
    return flatbuffers::EndianScalar(parent_node_index_);
  }
};
FLATBUFFERS_STRUCT_END(NodeData, 44);

struct Node FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NodeBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_MESH_INDICES = 6,
    VT_CHILDREN_INDICES = 8,
    VT_DATA = 10
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<int32_t> *mesh_indices() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_MESH_INDICES);
  }
  const flatbuffers::Vector<int32_t> *children_indices() const {
    return GetPointer<const flatbuffers::Vector<int32_t> *>(VT_CHILDREN_INDICES);
  }
  const TheGame::Sample::NodeData *data() const {
    return GetStruct<const TheGame::Sample::NodeData *>(VT_DATA);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyOffset(verifier, VT_MESH_INDICES) &&
           verifier.VerifyVector(mesh_indices()) &&
           VerifyOffset(verifier, VT_CHILDREN_INDICES) &&
           verifier.VerifyVector(children_indices()) &&
           VerifyField<TheGame::Sample::NodeData>(verifier, VT_DATA) &&
           verifier.EndTable();
  }
};

struct NodeBuilder {
  typedef Node Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Node::VT_NAME, name);
  }
  void add_mesh_indices(flatbuffers::Offset<flatbuffers::Vector<int32_t>> mesh_indices) {
    fbb_.AddOffset(Node::VT_MESH_INDICES, mesh_indices);
  }
  void add_children_indices(flatbuffers::Offset<flatbuffers::Vector<int32_t>> children_indices) {
    fbb_.AddOffset(Node::VT_CHILDREN_INDICES, children_indices);
  }
  void add_data(const TheGame::Sample::NodeData *data) {
    fbb_.AddStruct(Node::VT_DATA, data);
  }
  explicit NodeBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Node> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Node>(end);
    return o;
  }
};

inline flatbuffers::Offset<Node> CreateNode(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> mesh_indices = 0,
    flatbuffers::Offset<flatbuffers::Vector<int32_t>> children_indices = 0,
    const TheGame::Sample::NodeData *data = 0) {
  NodeBuilder builder_(_fbb);
  builder_.add_data(data);
  builder_.add_children_indices(children_indices);
  builder_.add_mesh_indices(mesh_indices);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<Node> CreateNodeDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    const std::vector<int32_t> *mesh_indices = nullptr,
    const std::vector<int32_t> *children_indices = nullptr,
    const TheGame::Sample::NodeData *data = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto mesh_indices__ = mesh_indices ? _fbb.CreateVector<int32_t>(*mesh_indices) : 0;
  auto children_indices__ = children_indices ? _fbb.CreateVector<int32_t>(*children_indices) : 0;
  return TheGame::Sample::CreateNode(
      _fbb,
      name__,
      mesh_indices__,
      children_indices__,
      data);
}

struct Mesh FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef MeshBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_MESHNAME = 4,
    VT_ALBEDO_TEXTURE_PATH = 6,
    VT_NORMAL_TEXTURE_PATH = 8,
    VT_MATERIAL_TEXTURE_PATH = 10,
    VT_VERTICES_START_INDEX = 12,
    VT_VERTICES_COUNT = 14,
    VT_INDICES_START_INDEX = 16,
    VT_INDICES_COUNT = 18,
    VT_LOCAL_POSITION = 20,
    VT_LOCAL_ROTATION = 22,
    VT_LOCAL_SCALE = 24,
    VT_MATERIAL_PATH = 26
  };
  const flatbuffers::String *meshname() const {
    return GetPointer<const flatbuffers::String *>(VT_MESHNAME);
  }
  const flatbuffers::String *albedo_texture_path() const {
    return GetPointer<const flatbuffers::String *>(VT_ALBEDO_TEXTURE_PATH);
  }
  const flatbuffers::String *normal_texture_path() const {
    return GetPointer<const flatbuffers::String *>(VT_NORMAL_TEXTURE_PATH);
  }
  const flatbuffers::String *material_texture_path() const {
    return GetPointer<const flatbuffers::String *>(VT_MATERIAL_TEXTURE_PATH);
  }
  int32_t vertices_start_index() const {
    return GetField<int32_t>(VT_VERTICES_START_INDEX, 0);
  }
  int32_t vertices_count() const {
    return GetField<int32_t>(VT_VERTICES_COUNT, 0);
  }
  int32_t indices_start_index() const {
    return GetField<int32_t>(VT_INDICES_START_INDEX, 0);
  }
  int32_t indices_count() const {
    return GetField<int32_t>(VT_INDICES_COUNT, 0);
  }
  const TheGame::Sample::Vec3f *local_position() const {
    return GetStruct<const TheGame::Sample::Vec3f *>(VT_LOCAL_POSITION);
  }
  const TheGame::Sample::Quatf *local_rotation() const {
    return GetStruct<const TheGame::Sample::Quatf *>(VT_LOCAL_ROTATION);
  }
  const TheGame::Sample::Vec3f *local_scale() const {
    return GetStruct<const TheGame::Sample::Vec3f *>(VT_LOCAL_SCALE);
  }
  const flatbuffers::String *material_path() const {
    return GetPointer<const flatbuffers::String *>(VT_MATERIAL_PATH);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_MESHNAME) &&
           verifier.VerifyString(meshname()) &&
           VerifyOffset(verifier, VT_ALBEDO_TEXTURE_PATH) &&
           verifier.VerifyString(albedo_texture_path()) &&
           VerifyOffset(verifier, VT_NORMAL_TEXTURE_PATH) &&
           verifier.VerifyString(normal_texture_path()) &&
           VerifyOffset(verifier, VT_MATERIAL_TEXTURE_PATH) &&
           verifier.VerifyString(material_texture_path()) &&
           VerifyField<int32_t>(verifier, VT_VERTICES_START_INDEX) &&
           VerifyField<int32_t>(verifier, VT_VERTICES_COUNT) &&
           VerifyField<int32_t>(verifier, VT_INDICES_START_INDEX) &&
           VerifyField<int32_t>(verifier, VT_INDICES_COUNT) &&
           VerifyField<TheGame::Sample::Vec3f>(verifier, VT_LOCAL_POSITION) &&
           VerifyField<TheGame::Sample::Quatf>(verifier, VT_LOCAL_ROTATION) &&
           VerifyField<TheGame::Sample::Vec3f>(verifier, VT_LOCAL_SCALE) &&
           VerifyOffset(verifier, VT_MATERIAL_PATH) &&
           verifier.VerifyString(material_path()) &&
           verifier.EndTable();
  }
};

struct MeshBuilder {
  typedef Mesh Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_meshname(flatbuffers::Offset<flatbuffers::String> meshname) {
    fbb_.AddOffset(Mesh::VT_MESHNAME, meshname);
  }
  void add_albedo_texture_path(flatbuffers::Offset<flatbuffers::String> albedo_texture_path) {
    fbb_.AddOffset(Mesh::VT_ALBEDO_TEXTURE_PATH, albedo_texture_path);
  }
  void add_normal_texture_path(flatbuffers::Offset<flatbuffers::String> normal_texture_path) {
    fbb_.AddOffset(Mesh::VT_NORMAL_TEXTURE_PATH, normal_texture_path);
  }
  void add_material_texture_path(flatbuffers::Offset<flatbuffers::String> material_texture_path) {
    fbb_.AddOffset(Mesh::VT_MATERIAL_TEXTURE_PATH, material_texture_path);
  }
  void add_vertices_start_index(int32_t vertices_start_index) {
    fbb_.AddElement<int32_t>(Mesh::VT_VERTICES_START_INDEX, vertices_start_index, 0);
  }
  void add_vertices_count(int32_t vertices_count) {
    fbb_.AddElement<int32_t>(Mesh::VT_VERTICES_COUNT, vertices_count, 0);
  }
  void add_indices_start_index(int32_t indices_start_index) {
    fbb_.AddElement<int32_t>(Mesh::VT_INDICES_START_INDEX, indices_start_index, 0);
  }
  void add_indices_count(int32_t indices_count) {
    fbb_.AddElement<int32_t>(Mesh::VT_INDICES_COUNT, indices_count, 0);
  }
  void add_local_position(const TheGame::Sample::Vec3f *local_position) {
    fbb_.AddStruct(Mesh::VT_LOCAL_POSITION, local_position);
  }
  void add_local_rotation(const TheGame::Sample::Quatf *local_rotation) {
    fbb_.AddStruct(Mesh::VT_LOCAL_ROTATION, local_rotation);
  }
  void add_local_scale(const TheGame::Sample::Vec3f *local_scale) {
    fbb_.AddStruct(Mesh::VT_LOCAL_SCALE, local_scale);
  }
  void add_material_path(flatbuffers::Offset<flatbuffers::String> material_path) {
    fbb_.AddOffset(Mesh::VT_MATERIAL_PATH, material_path);
  }
  explicit MeshBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Mesh> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Mesh>(end);
    return o;
  }
};

inline flatbuffers::Offset<Mesh> CreateMesh(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> meshname = 0,
    flatbuffers::Offset<flatbuffers::String> albedo_texture_path = 0,
    flatbuffers::Offset<flatbuffers::String> normal_texture_path = 0,
    flatbuffers::Offset<flatbuffers::String> material_texture_path = 0,
    int32_t vertices_start_index = 0,
    int32_t vertices_count = 0,
    int32_t indices_start_index = 0,
    int32_t indices_count = 0,
    const TheGame::Sample::Vec3f *local_position = 0,
    const TheGame::Sample::Quatf *local_rotation = 0,
    const TheGame::Sample::Vec3f *local_scale = 0,
    flatbuffers::Offset<flatbuffers::String> material_path = 0) {
  MeshBuilder builder_(_fbb);
  builder_.add_material_path(material_path);
  builder_.add_local_scale(local_scale);
  builder_.add_local_rotation(local_rotation);
  builder_.add_local_position(local_position);
  builder_.add_indices_count(indices_count);
  builder_.add_indices_start_index(indices_start_index);
  builder_.add_vertices_count(vertices_count);
  builder_.add_vertices_start_index(vertices_start_index);
  builder_.add_material_texture_path(material_texture_path);
  builder_.add_normal_texture_path(normal_texture_path);
  builder_.add_albedo_texture_path(albedo_texture_path);
  builder_.add_meshname(meshname);
  return builder_.Finish();
}

inline flatbuffers::Offset<Mesh> CreateMeshDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *meshname = nullptr,
    const char *albedo_texture_path = nullptr,
    const char *normal_texture_path = nullptr,
    const char *material_texture_path = nullptr,
    int32_t vertices_start_index = 0,
    int32_t vertices_count = 0,
    int32_t indices_start_index = 0,
    int32_t indices_count = 0,
    const TheGame::Sample::Vec3f *local_position = 0,
    const TheGame::Sample::Quatf *local_rotation = 0,
    const TheGame::Sample::Vec3f *local_scale = 0,
    const char *material_path = nullptr) {
  auto meshname__ = meshname ? _fbb.CreateString(meshname) : 0;
  auto albedo_texture_path__ = albedo_texture_path ? _fbb.CreateString(albedo_texture_path) : 0;
  auto normal_texture_path__ = normal_texture_path ? _fbb.CreateString(normal_texture_path) : 0;
  auto material_texture_path__ = material_texture_path ? _fbb.CreateString(material_texture_path) : 0;
  auto material_path__ = material_path ? _fbb.CreateString(material_path) : 0;
  return TheGame::Sample::CreateMesh(
      _fbb,
      meshname__,
      albedo_texture_path__,
      normal_texture_path__,
      material_texture_path__,
      vertices_start_index,
      vertices_count,
      indices_start_index,
      indices_count,
      local_position,
      local_rotation,
      local_scale,
      material_path__);
}

struct BoneToName FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef BoneToNameBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_INDEX = 6
  };
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  int32_t index() const {
    return GetField<int32_t>(VT_INDEX, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int32_t>(verifier, VT_INDEX) &&
           verifier.EndTable();
  }
};

struct BoneToNameBuilder {
  typedef BoneToName Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(BoneToName::VT_NAME, name);
  }
  void add_index(int32_t index) {
    fbb_.AddElement<int32_t>(BoneToName::VT_INDEX, index, 0);
  }
  explicit BoneToNameBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<BoneToName> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<BoneToName>(end);
    return o;
  }
};

inline flatbuffers::Offset<BoneToName> CreateBoneToName(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    int32_t index = 0) {
  BoneToNameBuilder builder_(_fbb);
  builder_.add_index(index);
  builder_.add_name(name);
  return builder_.Finish();
}

inline flatbuffers::Offset<BoneToName> CreateBoneToNameDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int32_t index = 0) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  return TheGame::Sample::CreateBoneToName(
      _fbb,
      name__,
      index);
}

struct Model FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef ModelBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_GLOBAL_INVERSE_TRANSFORM = 4,
    VT_BONES_COUNT = 6,
    VT_BOUNDING_SPHERE_CENTER = 8,
    VT_BOUNDING_SPHERE_RADIUS = 10,
    VT_VERTEX_COUNT = 12,
    VT_VERTICES = 14,
    VT_INDICES_COUNT = 16,
    VT_INDICES = 18,
    VT_MESH_COUNT = 20,
    VT_MESHES = 22,
    VT_BONE_OFFSET_COUNT = 24,
    VT_BONE_OFFSETS = 26,
    VT_BONE_TO_NAME_COUNT = 28,
    VT_BONE_TO_NAMES = 30,
    VT_NODES = 32
  };
  const TheGame::Sample::Mat4f *global_inverse_transform() const {
    return GetStruct<const TheGame::Sample::Mat4f *>(VT_GLOBAL_INVERSE_TRANSFORM);
  }
  int16_t bones_count() const {
    return GetField<int16_t>(VT_BONES_COUNT, 0);
  }
  const TheGame::Sample::Vec3f *bounding_sphere_center() const {
    return GetStruct<const TheGame::Sample::Vec3f *>(VT_BOUNDING_SPHERE_CENTER);
  }
  float bounding_sphere_radius() const {
    return GetField<float>(VT_BOUNDING_SPHERE_RADIUS, 0.0f);
  }
  int32_t vertex_count() const {
    return GetField<int32_t>(VT_VERTEX_COUNT, 0);
  }
  const flatbuffers::Vector<const TheGame::Sample::DefaultVertex *> *vertices() const {
    return GetPointer<const flatbuffers::Vector<const TheGame::Sample::DefaultVertex *> *>(VT_VERTICES);
  }
  int32_t indices_count() const {
    return GetField<int32_t>(VT_INDICES_COUNT, 0);
  }
  const flatbuffers::Vector<uint32_t> *indices() const {
    return GetPointer<const flatbuffers::Vector<uint32_t> *>(VT_INDICES);
  }
  int32_t mesh_count() const {
    return GetField<int32_t>(VT_MESH_COUNT, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Mesh>> *meshes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Mesh>> *>(VT_MESHES);
  }
  int32_t bone_offset_count() const {
    return GetField<int32_t>(VT_BONE_OFFSET_COUNT, 0);
  }
  const flatbuffers::Vector<const TheGame::Sample::Mat4f *> *bone_offsets() const {
    return GetPointer<const flatbuffers::Vector<const TheGame::Sample::Mat4f *> *>(VT_BONE_OFFSETS);
  }
  int32_t bone_to_name_count() const {
    return GetField<int32_t>(VT_BONE_TO_NAME_COUNT, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::BoneToName>> *bone_to_names() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::BoneToName>> *>(VT_BONE_TO_NAMES);
  }
  const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Node>> *nodes() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Node>> *>(VT_NODES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<TheGame::Sample::Mat4f>(verifier, VT_GLOBAL_INVERSE_TRANSFORM) &&
           VerifyField<int16_t>(verifier, VT_BONES_COUNT) &&
           VerifyField<TheGame::Sample::Vec3f>(verifier, VT_BOUNDING_SPHERE_CENTER) &&
           VerifyField<float>(verifier, VT_BOUNDING_SPHERE_RADIUS) &&
           VerifyField<int32_t>(verifier, VT_VERTEX_COUNT) &&
           VerifyOffset(verifier, VT_VERTICES) &&
           verifier.VerifyVector(vertices()) &&
           VerifyField<int32_t>(verifier, VT_INDICES_COUNT) &&
           VerifyOffset(verifier, VT_INDICES) &&
           verifier.VerifyVector(indices()) &&
           VerifyField<int32_t>(verifier, VT_MESH_COUNT) &&
           VerifyOffset(verifier, VT_MESHES) &&
           verifier.VerifyVector(meshes()) &&
           verifier.VerifyVectorOfTables(meshes()) &&
           VerifyField<int32_t>(verifier, VT_BONE_OFFSET_COUNT) &&
           VerifyOffset(verifier, VT_BONE_OFFSETS) &&
           verifier.VerifyVector(bone_offsets()) &&
           VerifyField<int32_t>(verifier, VT_BONE_TO_NAME_COUNT) &&
           VerifyOffset(verifier, VT_BONE_TO_NAMES) &&
           verifier.VerifyVector(bone_to_names()) &&
           verifier.VerifyVectorOfTables(bone_to_names()) &&
           VerifyOffset(verifier, VT_NODES) &&
           verifier.VerifyVector(nodes()) &&
           verifier.VerifyVectorOfTables(nodes()) &&
           verifier.EndTable();
  }
};

struct ModelBuilder {
  typedef Model Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_global_inverse_transform(const TheGame::Sample::Mat4f *global_inverse_transform) {
    fbb_.AddStruct(Model::VT_GLOBAL_INVERSE_TRANSFORM, global_inverse_transform);
  }
  void add_bones_count(int16_t bones_count) {
    fbb_.AddElement<int16_t>(Model::VT_BONES_COUNT, bones_count, 0);
  }
  void add_bounding_sphere_center(const TheGame::Sample::Vec3f *bounding_sphere_center) {
    fbb_.AddStruct(Model::VT_BOUNDING_SPHERE_CENTER, bounding_sphere_center);
  }
  void add_bounding_sphere_radius(float bounding_sphere_radius) {
    fbb_.AddElement<float>(Model::VT_BOUNDING_SPHERE_RADIUS, bounding_sphere_radius, 0.0f);
  }
  void add_vertex_count(int32_t vertex_count) {
    fbb_.AddElement<int32_t>(Model::VT_VERTEX_COUNT, vertex_count, 0);
  }
  void add_vertices(flatbuffers::Offset<flatbuffers::Vector<const TheGame::Sample::DefaultVertex *>> vertices) {
    fbb_.AddOffset(Model::VT_VERTICES, vertices);
  }
  void add_indices_count(int32_t indices_count) {
    fbb_.AddElement<int32_t>(Model::VT_INDICES_COUNT, indices_count, 0);
  }
  void add_indices(flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indices) {
    fbb_.AddOffset(Model::VT_INDICES, indices);
  }
  void add_mesh_count(int32_t mesh_count) {
    fbb_.AddElement<int32_t>(Model::VT_MESH_COUNT, mesh_count, 0);
  }
  void add_meshes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Mesh>>> meshes) {
    fbb_.AddOffset(Model::VT_MESHES, meshes);
  }
  void add_bone_offset_count(int32_t bone_offset_count) {
    fbb_.AddElement<int32_t>(Model::VT_BONE_OFFSET_COUNT, bone_offset_count, 0);
  }
  void add_bone_offsets(flatbuffers::Offset<flatbuffers::Vector<const TheGame::Sample::Mat4f *>> bone_offsets) {
    fbb_.AddOffset(Model::VT_BONE_OFFSETS, bone_offsets);
  }
  void add_bone_to_name_count(int32_t bone_to_name_count) {
    fbb_.AddElement<int32_t>(Model::VT_BONE_TO_NAME_COUNT, bone_to_name_count, 0);
  }
  void add_bone_to_names(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::BoneToName>>> bone_to_names) {
    fbb_.AddOffset(Model::VT_BONE_TO_NAMES, bone_to_names);
  }
  void add_nodes(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Node>>> nodes) {
    fbb_.AddOffset(Model::VT_NODES, nodes);
  }
  explicit ModelBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<Model> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Model>(end);
    return o;
  }
};

inline flatbuffers::Offset<Model> CreateModel(
    flatbuffers::FlatBufferBuilder &_fbb,
    const TheGame::Sample::Mat4f *global_inverse_transform = 0,
    int16_t bones_count = 0,
    const TheGame::Sample::Vec3f *bounding_sphere_center = 0,
    float bounding_sphere_radius = 0.0f,
    int32_t vertex_count = 0,
    flatbuffers::Offset<flatbuffers::Vector<const TheGame::Sample::DefaultVertex *>> vertices = 0,
    int32_t indices_count = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint32_t>> indices = 0,
    int32_t mesh_count = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Mesh>>> meshes = 0,
    int32_t bone_offset_count = 0,
    flatbuffers::Offset<flatbuffers::Vector<const TheGame::Sample::Mat4f *>> bone_offsets = 0,
    int32_t bone_to_name_count = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::BoneToName>>> bone_to_names = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<TheGame::Sample::Node>>> nodes = 0) {
  ModelBuilder builder_(_fbb);
  builder_.add_nodes(nodes);
  builder_.add_bone_to_names(bone_to_names);
  builder_.add_bone_to_name_count(bone_to_name_count);
  builder_.add_bone_offsets(bone_offsets);
  builder_.add_bone_offset_count(bone_offset_count);
  builder_.add_meshes(meshes);
  builder_.add_mesh_count(mesh_count);
  builder_.add_indices(indices);
  builder_.add_indices_count(indices_count);
  builder_.add_vertices(vertices);
  builder_.add_vertex_count(vertex_count);
  builder_.add_bounding_sphere_radius(bounding_sphere_radius);
  builder_.add_bounding_sphere_center(bounding_sphere_center);
  builder_.add_global_inverse_transform(global_inverse_transform);
  builder_.add_bones_count(bones_count);
  return builder_.Finish();
}

inline flatbuffers::Offset<Model> CreateModelDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    const TheGame::Sample::Mat4f *global_inverse_transform = 0,
    int16_t bones_count = 0,
    const TheGame::Sample::Vec3f *bounding_sphere_center = 0,
    float bounding_sphere_radius = 0.0f,
    int32_t vertex_count = 0,
    const std::vector<TheGame::Sample::DefaultVertex> *vertices = nullptr,
    int32_t indices_count = 0,
    const std::vector<uint32_t> *indices = nullptr,
    int32_t mesh_count = 0,
    const std::vector<flatbuffers::Offset<TheGame::Sample::Mesh>> *meshes = nullptr,
    int32_t bone_offset_count = 0,
    const std::vector<TheGame::Sample::Mat4f> *bone_offsets = nullptr,
    int32_t bone_to_name_count = 0,
    const std::vector<flatbuffers::Offset<TheGame::Sample::BoneToName>> *bone_to_names = nullptr,
    const std::vector<flatbuffers::Offset<TheGame::Sample::Node>> *nodes = nullptr) {
  auto vertices__ = vertices ? _fbb.CreateVectorOfStructs<TheGame::Sample::DefaultVertex>(*vertices) : 0;
  auto indices__ = indices ? _fbb.CreateVector<uint32_t>(*indices) : 0;
  auto meshes__ = meshes ? _fbb.CreateVector<flatbuffers::Offset<TheGame::Sample::Mesh>>(*meshes) : 0;
  auto bone_offsets__ = bone_offsets ? _fbb.CreateVectorOfStructs<TheGame::Sample::Mat4f>(*bone_offsets) : 0;
  auto bone_to_names__ = bone_to_names ? _fbb.CreateVector<flatbuffers::Offset<TheGame::Sample::BoneToName>>(*bone_to_names) : 0;
  auto nodes__ = nodes ? _fbb.CreateVector<flatbuffers::Offset<TheGame::Sample::Node>>(*nodes) : 0;
  return TheGame::Sample::CreateModel(
      _fbb,
      global_inverse_transform,
      bones_count,
      bounding_sphere_center,
      bounding_sphere_radius,
      vertex_count,
      vertices__,
      indices_count,
      indices__,
      mesh_count,
      meshes__,
      bone_offset_count,
      bone_offsets__,
      bone_to_name_count,
      bone_to_names__,
      nodes__);
}

inline const TheGame::Sample::Model *GetModel(const void *buf) {
  return flatbuffers::GetRoot<TheGame::Sample::Model>(buf);
}

inline const TheGame::Sample::Model *GetSizePrefixedModel(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<TheGame::Sample::Model>(buf);
}

inline const char *ModelIdentifier() {
  return "G6ML";
}

inline bool ModelBufferHasIdentifier(const void *buf) {
  return flatbuffers::BufferHasIdentifier(
      buf, ModelIdentifier());
}

inline bool VerifyModelBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<TheGame::Sample::Model>(ModelIdentifier());
}

inline bool VerifySizePrefixedModelBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<TheGame::Sample::Model>(ModelIdentifier());
}

inline void FinishModelBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<TheGame::Sample::Model> root) {
  fbb.Finish(root, ModelIdentifier());
}

inline void FinishSizePrefixedModelBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<TheGame::Sample::Model> root) {
  fbb.FinishSizePrefixed(root, ModelIdentifier());
}

}  // namespace Sample
}  // namespace MyGame

#endif  // FLATBUFFERS_GENERATED_MODEL_MYGAME_SAMPLE_H_