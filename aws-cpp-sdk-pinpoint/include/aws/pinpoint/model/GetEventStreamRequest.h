﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   * GetEventStream Request
   */
  class AWS_PINPOINT_API GetEventStreamRequest : public PinpointRequest
  {
  public:
    GetEventStreamRequest();
    Aws::String SerializePayload() const override;

    /**
     * ApplicationId
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * ApplicationId
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * ApplicationId
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * ApplicationId
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * ApplicationId
     */
    inline GetEventStreamRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * ApplicationId
     */
    inline GetEventStreamRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * ApplicationId
     */
    inline GetEventStreamRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:
    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
