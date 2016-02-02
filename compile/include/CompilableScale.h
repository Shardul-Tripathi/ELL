// CompilableScale.h

#pragma once

#include "CompilableLayer.h"

#include "Scale.h"
using layers::Scale;

/// A struct that adds printing capabilities to a layer
///
struct CompilableScale : public Scale, public CompilableLayer
{
public:
    virtual void BackwardPass(uint64 currentLayerIndex, vector<vector<vector<AddToAction>>>& actions) const override;
};