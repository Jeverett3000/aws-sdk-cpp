﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ram/model/PermissionType.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace RAM
  {
    namespace Model
    {
      namespace PermissionTypeMapper
      {

        static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
        static const int AWS_MANAGED_HASH = HashingUtils::HashString("AWS_MANAGED");


        PermissionType GetPermissionTypeForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == CUSTOMER_MANAGED_HASH)
          {
            return PermissionType::CUSTOMER_MANAGED;
          }
          else if (hashCode == AWS_MANAGED_HASH)
          {
            return PermissionType::AWS_MANAGED;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<PermissionType>(hashCode);
          }

          return PermissionType::NOT_SET;
        }

        Aws::String GetNameForPermissionType(PermissionType enumValue)
        {
          switch(enumValue)
          {
          case PermissionType::CUSTOMER_MANAGED:
            return "CUSTOMER_MANAGED";
          case PermissionType::AWS_MANAGED:
            return "AWS_MANAGED";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace PermissionTypeMapper
    } // namespace Model
  } // namespace RAM
} // namespace Aws
