//
// SkyNet Project
// Copyright (C) 2018 by Contributors <https://github.com/Tyill/skynet>
//
// This code is licensed under the MIT License.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files(the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions :
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
#pragma once

#include "snBase/snBase.h"

void channelBatchNorm(bool fwBw, bool isLern, const SN_Base::snSize& insz, SN_Base::snFloat* in, SN_Base::snFloat* out, SN_Base::batchNorm prm);

void layerBatchNorm(bool fwBw, bool isLern, const SN_Base::snSize& insz, SN_Base::snFloat* in, SN_Base::snFloat* out, const SN_Base::batchNorm& prm);

void batchNormForward(const SN_Base::snSize& insz,
    SN_Base::snFloat* in,
    SN_Base::snFloat* out,
    SN_Base::batchNorm);

void batchNormBackward(const SN_Base::snSize& insz,
    SN_Base::snFloat* gradIn,
    SN_Base::snFloat* gradOut,
    SN_Base::batchNorm);

void dropOut(bool isLern, SN_Base::snFloat dropOut, const SN_Base::snSize& outsz, SN_Base::snFloat* out);

void paddingOffs(bool in2out, size_t paddingW, size_t paddingH, const SN_Base::snSize& insz, SN_Base::snFloat* in, SN_Base::snFloat* out);