//
//  textures.h
//
//  Created by 渡部 心 on 2015/04/06.
//  Copyright (c) 2015年 渡部 心. All rights reserved.
//

#ifndef __SLR__textures__
#define __SLR__textures__

#include "../defines.h"
#include "../references.h"
#include "../BasicTypes/TexCoord2.h"
#include "../BasicTypes/RGBTypes.h"
#include "../BasicTypes/SpectrumTypes.h"
#include "../BasicTypes/Normal3.h"

namespace SLR {
    class SLR_API SpectrumTexture {
    public:
        virtual ~SpectrumTexture() { };
        
        virtual SampledSpectrum evaluate(const TexCoord2D &tc, const WavelengthSamples &wls) const = 0;
        virtual RegularConstantContinuous2D* createIBLImportanceMap() const = 0;
    };
    
    class SLR_API Normal3DTexture {
    public:
        virtual ~Normal3DTexture() { };
        
        virtual Normal3D evaluate(const TexCoord2D &tc) const = 0;
    };
    
    class SLR_API FloatTexture {
    public:
        virtual ~FloatTexture() { };
        
        virtual float evaluate(const TexCoord2D &tc) const = 0;
    };    
}

#endif
