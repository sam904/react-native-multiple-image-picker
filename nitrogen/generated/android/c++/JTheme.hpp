///
/// JTheme.hpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#pragma once

#include <fbjni/fbjni.h>
#include "Theme.hpp"

namespace margelo::nitro::multipleimagepicker {

  using namespace facebook;

  /**
   * The C++ JNI bridge between the C++ enum "Theme" and the the Kotlin enum "Theme".
   */
  struct JTheme final: public jni::JavaClass<JTheme> {
  public:
    static auto constexpr kJavaDescriptor = "Lcom/margelo/nitro/multipleimagepicker/Theme;";

  public:
    /**
     * Convert this Java/Kotlin-based enum to the C++ enum Theme.
     */
    [[maybe_unused]]
    Theme toCpp() const {
      static const auto clazz = javaClassStatic();
      static const auto fieldOrdinal = clazz->getField<int>("ordinal");
      int ordinal = this->getFieldValue(fieldOrdinal);
      return static_cast<Theme>(ordinal);
    }

  public:
    /**
     * Create a Java/Kotlin-based enum with the given C++ enum's value.
     */
    [[maybe_unused]]
    static jni::alias_ref<JTheme> fromCpp(Theme value) {
      static const auto clazz = javaClassStatic();
      static const auto fieldLIGHT = clazz->getStaticField<JTheme>("LIGHT");
      static const auto fieldDARK = clazz->getStaticField<JTheme>("DARK");
      
      switch (value) {
        case Theme::LIGHT:
          return clazz->getStaticFieldValue(fieldLIGHT);
        case Theme::DARK:
          return clazz->getStaticFieldValue(fieldDARK);
        default:
          std::string stringValue = std::to_string(static_cast<int>(value));
          throw std::invalid_argument("Invalid enum value (" + stringValue + "!");
      }
    }
  };

} // namespace margelo::nitro::multipleimagepicker
