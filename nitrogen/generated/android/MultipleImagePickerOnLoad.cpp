///
/// MultipleImagePickerOnLoad.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "MultipleImagePickerOnLoad.hpp"

#include <jni.h>
#include <fbjni/fbjni.h>
#include <NitroModules/HybridObjectRegistry.hpp>

#include "JHybridMultipleImagePickerSpec.hpp"
#include "JFunc_void_std__vector_PickerResult_.hpp"
#include "JFunc_void_double.hpp"
#include "JFunc_void_CropResult.hpp"
#include "JFunc_void_CameraResult.hpp"
#include <NitroModules/JNISharedPtr.hpp>
#include <NitroModules/DefaultConstructableObject.hpp>

namespace margelo::nitro::multipleimagepicker {

int initialize(JavaVM* vm) {
  using namespace margelo::nitro;
  using namespace margelo::nitro::multipleimagepicker;
  using namespace facebook;

  return facebook::jni::initialize(vm, [] {
    // Register native JNI methods
    margelo::nitro::multipleimagepicker::JHybridMultipleImagePickerSpec::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_std__vector_PickerResult_::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_double::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_CropResult::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_double::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_double::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_CameraResult::registerNatives();
    margelo::nitro::multipleimagepicker::JFunc_void_double::registerNatives();

    // Register Nitro Hybrid Objects
    HybridObjectRegistry::registerHybridObjectConstructor(
      "MultipleImagePicker",
      []() -> std::shared_ptr<HybridObject> {
        static DefaultConstructableObject<JHybridMultipleImagePickerSpec::javaobject> object("com/margelo/nitro/multipleimagepicker/MultipleImagePicker");
        auto instance = object.create();
        auto globalRef = jni::make_global(instance);
        return JNISharedPtr::make_shared_from_jni<JHybridMultipleImagePickerSpec>(globalRef);
      }
    );
  });
}

} // namespace margelo::nitro::multipleimagepicker
