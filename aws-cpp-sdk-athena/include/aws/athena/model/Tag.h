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
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Athena
{
namespace Model
{

  /**
   * <p>A tag that you can add to a resource. A tag is a label that you assign to an
   * AWS Athena resource (a workgroup). Each tag consists of a key and an optional
   * value, both of which you define. Tags enable you to categorize workgroups in
   * Athena, for example, by purpose, owner, or environment. Use a consistent set of
   * tag keys to make it easier to search and filter workgroups in your account. The
   * maximum tag key length is 128 Unicode characters in UTF-8. The maximum tag value
   * length is 256 Unicode characters in UTF-8. You can use letters and numbers
   * representable in UTF-8, and the following characters: + - = . _ : / @. Tag keys
   * and values are case-sensitive. Tag keys must be unique per resource.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/Tag">AWS API
   * Reference</a></p>
   */
  class AWS_ATHENA_API Tag
  {
  public:
    Tag();
    Tag(Aws::Utils::Json::JsonView jsonValue);
    Tag& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>A tag key. The tag key length is from 1 to 128 Unicode characters in UTF-8.
     * You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag keys are case-sensitive and must be unique per
     * resource. </p>
     */
    inline Tag& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>A tag value. The tag value length is from 0 to 256 Unicode characters in
     * UTF-8. You can use letters and numbers representable in UTF-8, and the following
     * characters: + - = . _ : / @. Tag values are case-sensitive. </p>
     */
    inline Tag& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace Athena
} // namespace Aws