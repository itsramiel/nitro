///
/// HybridKotlinTestObjectSpec.cpp
/// Thu Aug 29 2024
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "HybridKotlinTestObjectSpec.hpp"

namespace margelo::nitro::image {

  void HybridKotlinTestObjectSpec::loadHybridMethods() {
    // load base methods/properties
    HybridObject::loadHybridMethods();
    // load custom methods/properties
    registerHybrids(this, [](Prototype& prototype) {
      prototype.registerHybridGetter("numberValue", &HybridKotlinTestObjectSpec::getNumberValue);
      prototype.registerHybridSetter("numberValue", &HybridKotlinTestObjectSpec::setNumberValue);
      prototype.registerHybridGetter("optionalNumber", &HybridKotlinTestObjectSpec::getOptionalNumber);
      prototype.registerHybridSetter("optionalNumber", &HybridKotlinTestObjectSpec::setOptionalNumber);
      prototype.registerHybridGetter("primitiveArray", &HybridKotlinTestObjectSpec::getPrimitiveArray);
      prototype.registerHybridSetter("primitiveArray", &HybridKotlinTestObjectSpec::setPrimitiveArray);
      prototype.registerHybridGetter("carCollection", &HybridKotlinTestObjectSpec::getCarCollection);
      prototype.registerHybridSetter("carCollection", &HybridKotlinTestObjectSpec::setCarCollection);
      prototype.registerHybridGetter("someBuffer", &HybridKotlinTestObjectSpec::getSomeBuffer);
      prototype.registerHybridSetter("someBuffer", &HybridKotlinTestObjectSpec::setSomeBuffer);
      prototype.registerHybridGetter("someRecord", &HybridKotlinTestObjectSpec::getSomeRecord);
      prototype.registerHybridSetter("someRecord", &HybridKotlinTestObjectSpec::setSomeRecord);
      prototype.registerHybridMethod("asyncTest", &HybridKotlinTestObjectSpec::asyncTest);
      prototype.registerHybridMethod("createMap", &HybridKotlinTestObjectSpec::createMap);
      prototype.registerHybridMethod("addOnPersonBornListener", &HybridKotlinTestObjectSpec::addOnPersonBornListener);
    });
  }

} // namespace margelo::nitro::image