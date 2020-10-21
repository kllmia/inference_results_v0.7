// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/box_coder.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "object_detection/protos/box_coder.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace object_detection {
namespace protos {
class BoxCoderDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<BoxCoder>
     _instance;
  const ::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder_;
  const ::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder_;
  const ::object_detection::protos::SquareBoxCoder* square_box_coder_;
  const ::object_detection::protos::KeypointBoxCoder* keypoint_box_coder_;
} _BoxCoder_default_instance_;

namespace protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxCoder, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxCoder, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxCoder, _oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  offsetof(BoxCoderDefaultTypeInternal, faster_rcnn_box_coder_),
  offsetof(BoxCoderDefaultTypeInternal, mean_stddev_box_coder_),
  offsetof(BoxCoderDefaultTypeInternal, square_box_coder_),
  offsetof(BoxCoderDefaultTypeInternal, keypoint_box_coder_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(BoxCoder, box_coder_oneof_),
  ~0u,
  ~0u,
  ~0u,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(BoxCoder)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_BoxCoder_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "object_detection/protos/box_coder.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2ffaster_5frcnn_5fbox_5fcoder_2eproto::InitDefaults();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto::InitDefaults();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fmean_5fstddev_5fbox_5fcoder_2eproto::InitDefaults();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fsquare_5fbox_5fcoder_2eproto::InitDefaults();
  _BoxCoder_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_BoxCoder_default_instance_);_BoxCoder_default_instance_.faster_rcnn_box_coder_ = const_cast< ::object_detection::protos::FasterRcnnBoxCoder*>(
      ::object_detection::protos::FasterRcnnBoxCoder::internal_default_instance());
  _BoxCoder_default_instance_.mean_stddev_box_coder_ = const_cast< ::object_detection::protos::MeanStddevBoxCoder*>(
      ::object_detection::protos::MeanStddevBoxCoder::internal_default_instance());
  _BoxCoder_default_instance_.square_box_coder_ = const_cast< ::object_detection::protos::SquareBoxCoder*>(
      ::object_detection::protos::SquareBoxCoder::internal_default_instance());
  _BoxCoder_default_instance_.keypoint_box_coder_ = const_cast< ::object_detection::protos::KeypointBoxCoder*>(
      ::object_detection::protos::KeypointBoxCoder::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\'object_detection/protos/box_coder.prot"
      "o\022\027object_detection.protos\0323object_detec"
      "tion/protos/faster_rcnn_box_coder.proto\032"
      "0object_detection/protos/keypoint_box_co"
      "der.proto\0323object_detection/protos/mean_"
      "stddev_box_coder.proto\032.object_detection"
      "/protos/square_box_coder.proto\"\307\002\n\010BoxCo"
      "der\022L\n\025faster_rcnn_box_coder\030\001 \001(\0132+.obj"
      "ect_detection.protos.FasterRcnnBoxCoderH"
      "\000\022L\n\025mean_stddev_box_coder\030\002 \001(\0132+.objec"
      "t_detection.protos.MeanStddevBoxCoderH\000\022"
      "C\n\020square_box_coder\030\003 \001(\0132\'.object_detec"
      "tion.protos.SquareBoxCoderH\000\022G\n\022keypoint"
      "_box_coder\030\004 \001(\0132).object_detection.prot"
      "os.KeypointBoxCoderH\000B\021\n\017box_coder_oneof"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 600);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "object_detection/protos/box_coder.proto", &protobuf_RegisterTypes);
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2ffaster_5frcnn_5fbox_5fcoder_2eproto::AddDescriptors();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fkeypoint_5fbox_5fcoder_2eproto::AddDescriptors();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fmean_5fstddev_5fbox_5fcoder_2eproto::AddDescriptors();
  ::object_detection::protos::protobuf_object_5fdetection_2fprotos_2fsquare_5fbox_5fcoder_2eproto::AddDescriptors();
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoxCoder::kFasterRcnnBoxCoderFieldNumber;
const int BoxCoder::kMeanStddevBoxCoderFieldNumber;
const int BoxCoder::kSquareBoxCoderFieldNumber;
const int BoxCoder::kKeypointBoxCoderFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoxCoder::BoxCoder()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.BoxCoder)
}
BoxCoder::BoxCoder(const BoxCoder& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clear_has_box_coder_oneof();
  switch (from.box_coder_oneof_case()) {
    case kFasterRcnnBoxCoder: {
      mutable_faster_rcnn_box_coder()->::object_detection::protos::FasterRcnnBoxCoder::MergeFrom(from.faster_rcnn_box_coder());
      break;
    }
    case kMeanStddevBoxCoder: {
      mutable_mean_stddev_box_coder()->::object_detection::protos::MeanStddevBoxCoder::MergeFrom(from.mean_stddev_box_coder());
      break;
    }
    case kSquareBoxCoder: {
      mutable_square_box_coder()->::object_detection::protos::SquareBoxCoder::MergeFrom(from.square_box_coder());
      break;
    }
    case kKeypointBoxCoder: {
      mutable_keypoint_box_coder()->::object_detection::protos::KeypointBoxCoder::MergeFrom(from.keypoint_box_coder());
      break;
    }
    case BOX_CODER_ONEOF_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.BoxCoder)
}

void BoxCoder::SharedCtor() {
  _cached_size_ = 0;
  clear_has_box_coder_oneof();
}

BoxCoder::~BoxCoder() {
  // @@protoc_insertion_point(destructor:object_detection.protos.BoxCoder)
  SharedDtor();
}

void BoxCoder::SharedDtor() {
  if (has_box_coder_oneof()) {
    clear_box_coder_oneof();
  }
}

void BoxCoder::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoxCoder::descriptor() {
  protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BoxCoder& BoxCoder::default_instance() {
  protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::InitDefaults();
  return *internal_default_instance();
}

BoxCoder* BoxCoder::New(::google::protobuf::Arena* arena) const {
  BoxCoder* n = new BoxCoder;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BoxCoder::clear_box_coder_oneof() {
// @@protoc_insertion_point(one_of_clear_start:object_detection.protos.BoxCoder)
  switch (box_coder_oneof_case()) {
    case kFasterRcnnBoxCoder: {
      delete box_coder_oneof_.faster_rcnn_box_coder_;
      break;
    }
    case kMeanStddevBoxCoder: {
      delete box_coder_oneof_.mean_stddev_box_coder_;
      break;
    }
    case kSquareBoxCoder: {
      delete box_coder_oneof_.square_box_coder_;
      break;
    }
    case kKeypointBoxCoder: {
      delete box_coder_oneof_.keypoint_box_coder_;
      break;
    }
    case BOX_CODER_ONEOF_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = BOX_CODER_ONEOF_NOT_SET;
}


void BoxCoder::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.BoxCoder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  clear_box_coder_oneof();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool BoxCoder::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.BoxCoder)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .object_detection.protos.FasterRcnnBoxCoder faster_rcnn_box_coder = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_faster_rcnn_box_coder()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.MeanStddevBoxCoder mean_stddev_box_coder = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_mean_stddev_box_coder()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.SquareBoxCoder square_box_coder = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_square_box_coder()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .object_detection.protos.KeypointBoxCoder keypoint_box_coder = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_keypoint_box_coder()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:object_detection.protos.BoxCoder)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.BoxCoder)
  return false;
#undef DO_
}

void BoxCoder::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.BoxCoder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (box_coder_oneof_case()) {
    case kFasterRcnnBoxCoder:
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        1, *box_coder_oneof_.faster_rcnn_box_coder_, output);
      break;
    case kMeanStddevBoxCoder:
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2, *box_coder_oneof_.mean_stddev_box_coder_, output);
      break;
    case kSquareBoxCoder:
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        3, *box_coder_oneof_.square_box_coder_, output);
      break;
    case kKeypointBoxCoder:
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        4, *box_coder_oneof_.keypoint_box_coder_, output);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.BoxCoder)
}

::google::protobuf::uint8* BoxCoder::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.BoxCoder)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (box_coder_oneof_case()) {
    case kFasterRcnnBoxCoder:
      target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessageNoVirtualToArray(
          1, *box_coder_oneof_.faster_rcnn_box_coder_, deterministic, target);
      break;
    case kMeanStddevBoxCoder:
      target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessageNoVirtualToArray(
          2, *box_coder_oneof_.mean_stddev_box_coder_, deterministic, target);
      break;
    case kSquareBoxCoder:
      target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessageNoVirtualToArray(
          3, *box_coder_oneof_.square_box_coder_, deterministic, target);
      break;
    case kKeypointBoxCoder:
      target = ::google::protobuf::internal::WireFormatLite::
        InternalWriteMessageNoVirtualToArray(
          4, *box_coder_oneof_.keypoint_box_coder_, deterministic, target);
      break;
    default: ;
  }
  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.BoxCoder)
  return target;
}

size_t BoxCoder::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.BoxCoder)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  switch (box_coder_oneof_case()) {
    // optional .object_detection.protos.FasterRcnnBoxCoder faster_rcnn_box_coder = 1;
    case kFasterRcnnBoxCoder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *box_coder_oneof_.faster_rcnn_box_coder_);
      break;
    }
    // optional .object_detection.protos.MeanStddevBoxCoder mean_stddev_box_coder = 2;
    case kMeanStddevBoxCoder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *box_coder_oneof_.mean_stddev_box_coder_);
      break;
    }
    // optional .object_detection.protos.SquareBoxCoder square_box_coder = 3;
    case kSquareBoxCoder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *box_coder_oneof_.square_box_coder_);
      break;
    }
    // optional .object_detection.protos.KeypointBoxCoder keypoint_box_coder = 4;
    case kKeypointBoxCoder: {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *box_coder_oneof_.keypoint_box_coder_);
      break;
    }
    case BOX_CODER_ONEOF_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void BoxCoder::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.BoxCoder)
  GOOGLE_DCHECK_NE(&from, this);
  const BoxCoder* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const BoxCoder>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.BoxCoder)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.BoxCoder)
    MergeFrom(*source);
  }
}

void BoxCoder::MergeFrom(const BoxCoder& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.BoxCoder)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  switch (from.box_coder_oneof_case()) {
    case kFasterRcnnBoxCoder: {
      mutable_faster_rcnn_box_coder()->::object_detection::protos::FasterRcnnBoxCoder::MergeFrom(from.faster_rcnn_box_coder());
      break;
    }
    case kMeanStddevBoxCoder: {
      mutable_mean_stddev_box_coder()->::object_detection::protos::MeanStddevBoxCoder::MergeFrom(from.mean_stddev_box_coder());
      break;
    }
    case kSquareBoxCoder: {
      mutable_square_box_coder()->::object_detection::protos::SquareBoxCoder::MergeFrom(from.square_box_coder());
      break;
    }
    case kKeypointBoxCoder: {
      mutable_keypoint_box_coder()->::object_detection::protos::KeypointBoxCoder::MergeFrom(from.keypoint_box_coder());
      break;
    }
    case BOX_CODER_ONEOF_NOT_SET: {
      break;
    }
  }
}

void BoxCoder::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.BoxCoder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void BoxCoder::CopyFrom(const BoxCoder& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.BoxCoder)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BoxCoder::IsInitialized() const {
  return true;
}

void BoxCoder::Swap(BoxCoder* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BoxCoder::InternalSwap(BoxCoder* other) {
  using std::swap;
  swap(box_coder_oneof_, other->box_coder_oneof_);
  swap(_oneof_case_[0], other->_oneof_case_[0]);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata BoxCoder::GetMetadata() const {
  protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fbox_5fcoder_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// BoxCoder

// optional .object_detection.protos.FasterRcnnBoxCoder faster_rcnn_box_coder = 1;
bool BoxCoder::has_faster_rcnn_box_coder() const {
  return box_coder_oneof_case() == kFasterRcnnBoxCoder;
}
void BoxCoder::set_has_faster_rcnn_box_coder() {
  _oneof_case_[0] = kFasterRcnnBoxCoder;
}
void BoxCoder::clear_faster_rcnn_box_coder() {
  if (has_faster_rcnn_box_coder()) {
    delete box_coder_oneof_.faster_rcnn_box_coder_;
    clear_has_box_coder_oneof();
  }
}
 const ::object_detection::protos::FasterRcnnBoxCoder& BoxCoder::faster_rcnn_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  return has_faster_rcnn_box_coder()
      ? *box_coder_oneof_.faster_rcnn_box_coder_
      : ::object_detection::protos::FasterRcnnBoxCoder::default_instance();
}
::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::mutable_faster_rcnn_box_coder() {
  if (!has_faster_rcnn_box_coder()) {
    clear_box_coder_oneof();
    set_has_faster_rcnn_box_coder();
    box_coder_oneof_.faster_rcnn_box_coder_ = new ::object_detection::protos::FasterRcnnBoxCoder;
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  return box_coder_oneof_.faster_rcnn_box_coder_;
}
::object_detection::protos::FasterRcnnBoxCoder* BoxCoder::release_faster_rcnn_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
  if (has_faster_rcnn_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::FasterRcnnBoxCoder* temp = box_coder_oneof_.faster_rcnn_box_coder_;
    box_coder_oneof_.faster_rcnn_box_coder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void BoxCoder::set_allocated_faster_rcnn_box_coder(::object_detection::protos::FasterRcnnBoxCoder* faster_rcnn_box_coder) {
  clear_box_coder_oneof();
  if (faster_rcnn_box_coder) {
    set_has_faster_rcnn_box_coder();
    box_coder_oneof_.faster_rcnn_box_coder_ = faster_rcnn_box_coder;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.BoxCoder.faster_rcnn_box_coder)
}

// optional .object_detection.protos.MeanStddevBoxCoder mean_stddev_box_coder = 2;
bool BoxCoder::has_mean_stddev_box_coder() const {
  return box_coder_oneof_case() == kMeanStddevBoxCoder;
}
void BoxCoder::set_has_mean_stddev_box_coder() {
  _oneof_case_[0] = kMeanStddevBoxCoder;
}
void BoxCoder::clear_mean_stddev_box_coder() {
  if (has_mean_stddev_box_coder()) {
    delete box_coder_oneof_.mean_stddev_box_coder_;
    clear_has_box_coder_oneof();
  }
}
 const ::object_detection::protos::MeanStddevBoxCoder& BoxCoder::mean_stddev_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  return has_mean_stddev_box_coder()
      ? *box_coder_oneof_.mean_stddev_box_coder_
      : ::object_detection::protos::MeanStddevBoxCoder::default_instance();
}
::object_detection::protos::MeanStddevBoxCoder* BoxCoder::mutable_mean_stddev_box_coder() {
  if (!has_mean_stddev_box_coder()) {
    clear_box_coder_oneof();
    set_has_mean_stddev_box_coder();
    box_coder_oneof_.mean_stddev_box_coder_ = new ::object_detection::protos::MeanStddevBoxCoder;
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  return box_coder_oneof_.mean_stddev_box_coder_;
}
::object_detection::protos::MeanStddevBoxCoder* BoxCoder::release_mean_stddev_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.mean_stddev_box_coder)
  if (has_mean_stddev_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::MeanStddevBoxCoder* temp = box_coder_oneof_.mean_stddev_box_coder_;
    box_coder_oneof_.mean_stddev_box_coder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void BoxCoder::set_allocated_mean_stddev_box_coder(::object_detection::protos::MeanStddevBoxCoder* mean_stddev_box_coder) {
  clear_box_coder_oneof();
  if (mean_stddev_box_coder) {
    set_has_mean_stddev_box_coder();
    box_coder_oneof_.mean_stddev_box_coder_ = mean_stddev_box_coder;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.BoxCoder.mean_stddev_box_coder)
}

// optional .object_detection.protos.SquareBoxCoder square_box_coder = 3;
bool BoxCoder::has_square_box_coder() const {
  return box_coder_oneof_case() == kSquareBoxCoder;
}
void BoxCoder::set_has_square_box_coder() {
  _oneof_case_[0] = kSquareBoxCoder;
}
void BoxCoder::clear_square_box_coder() {
  if (has_square_box_coder()) {
    delete box_coder_oneof_.square_box_coder_;
    clear_has_box_coder_oneof();
  }
}
 const ::object_detection::protos::SquareBoxCoder& BoxCoder::square_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.square_box_coder)
  return has_square_box_coder()
      ? *box_coder_oneof_.square_box_coder_
      : ::object_detection::protos::SquareBoxCoder::default_instance();
}
::object_detection::protos::SquareBoxCoder* BoxCoder::mutable_square_box_coder() {
  if (!has_square_box_coder()) {
    clear_box_coder_oneof();
    set_has_square_box_coder();
    box_coder_oneof_.square_box_coder_ = new ::object_detection::protos::SquareBoxCoder;
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.square_box_coder)
  return box_coder_oneof_.square_box_coder_;
}
::object_detection::protos::SquareBoxCoder* BoxCoder::release_square_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.square_box_coder)
  if (has_square_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::SquareBoxCoder* temp = box_coder_oneof_.square_box_coder_;
    box_coder_oneof_.square_box_coder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void BoxCoder::set_allocated_square_box_coder(::object_detection::protos::SquareBoxCoder* square_box_coder) {
  clear_box_coder_oneof();
  if (square_box_coder) {
    set_has_square_box_coder();
    box_coder_oneof_.square_box_coder_ = square_box_coder;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.BoxCoder.square_box_coder)
}

// optional .object_detection.protos.KeypointBoxCoder keypoint_box_coder = 4;
bool BoxCoder::has_keypoint_box_coder() const {
  return box_coder_oneof_case() == kKeypointBoxCoder;
}
void BoxCoder::set_has_keypoint_box_coder() {
  _oneof_case_[0] = kKeypointBoxCoder;
}
void BoxCoder::clear_keypoint_box_coder() {
  if (has_keypoint_box_coder()) {
    delete box_coder_oneof_.keypoint_box_coder_;
    clear_has_box_coder_oneof();
  }
}
 const ::object_detection::protos::KeypointBoxCoder& BoxCoder::keypoint_box_coder() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.BoxCoder.keypoint_box_coder)
  return has_keypoint_box_coder()
      ? *box_coder_oneof_.keypoint_box_coder_
      : ::object_detection::protos::KeypointBoxCoder::default_instance();
}
::object_detection::protos::KeypointBoxCoder* BoxCoder::mutable_keypoint_box_coder() {
  if (!has_keypoint_box_coder()) {
    clear_box_coder_oneof();
    set_has_keypoint_box_coder();
    box_coder_oneof_.keypoint_box_coder_ = new ::object_detection::protos::KeypointBoxCoder;
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.BoxCoder.keypoint_box_coder)
  return box_coder_oneof_.keypoint_box_coder_;
}
::object_detection::protos::KeypointBoxCoder* BoxCoder::release_keypoint_box_coder() {
  // @@protoc_insertion_point(field_release:object_detection.protos.BoxCoder.keypoint_box_coder)
  if (has_keypoint_box_coder()) {
    clear_has_box_coder_oneof();
    ::object_detection::protos::KeypointBoxCoder* temp = box_coder_oneof_.keypoint_box_coder_;
    box_coder_oneof_.keypoint_box_coder_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void BoxCoder::set_allocated_keypoint_box_coder(::object_detection::protos::KeypointBoxCoder* keypoint_box_coder) {
  clear_box_coder_oneof();
  if (keypoint_box_coder) {
    set_has_keypoint_box_coder();
    box_coder_oneof_.keypoint_box_coder_ = keypoint_box_coder;
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.BoxCoder.keypoint_box_coder)
}

bool BoxCoder::has_box_coder_oneof() const {
  return box_coder_oneof_case() != BOX_CODER_ONEOF_NOT_SET;
}
void BoxCoder::clear_has_box_coder_oneof() {
  _oneof_case_[0] = BOX_CODER_ONEOF_NOT_SET;
}
BoxCoder::BoxCoderOneofCase BoxCoder::box_coder_oneof_case() const {
  return BoxCoder::BoxCoderOneofCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)