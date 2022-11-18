/******************************************************************************
* Copyright 2015-2019 Xilinx, Inc.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
******************************************************************************/

#pragma once

#ifndef _BOOTIMAGE_ZYNQ_H_
#define _BOOTIMAGE_ZYNQ_H_


/*
-------------------------------------------------------------------------------
***********************************************   H E A D E R   F I L E S   ***
-------------------------------------------------------------------------------
*/
#include "bootimage.h"
#include "bootheader-zynq.h"
#include "imageheadertable-zynq.h"


/*
-------------------------------------------------------------------------------
*********************************************************   C L A S S E S   ***
-------------------------------------------------------------------------------
*/
/******************************************************************************/
class ZynqBootImage : public BootImage
{
public:
    ZynqBootImage(Options& options, uint8_t index);
    ~ZynqBootImage()
    {
        if (importedBh != NULL)
        {
            delete importedBh;
        }
    };

    void ConfigureEncryptionContext(ImageHeader * image, Encryption::Type encryptType);
    void ConfigureAuthenticationContext(ImageHeader * image, Authentication::Type authType, PartitionBifOptions * partitionbifoptions);
    void ConfigureChecksumContext(ImageHeader * image, Checksum::Type checksumType);
    void ConfigureProcessingStages(ImageHeader * image, PartitionBifOptions * partitionbifoptions);

    void DetermineEncryptionDefaults();
    void ParseBootImage(PartitionBifOptions * it);
    void ValidateSecureAttributes(ImageHeader * image, BifOptions* bifoptions, PartitionBifOptions* partitionBifOptions);
    void ParsePartitionDataToImage(BifOptions* bifoptions, PartitionBifOptions* it);

    void Add(BifOptions* bifoptions);
protected:
    ZynqBootHeader* importedBh;
};

#endif
