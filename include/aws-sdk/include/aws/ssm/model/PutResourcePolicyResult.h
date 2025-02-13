﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API PutResourcePolicyResult
  {
  public:
    PutResourcePolicyResult();
    PutResourcePolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutResourcePolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyId = value; }

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyId = std::move(value); }

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyId.assign(value); }

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The policy ID. To update a policy, you must specify <code>PolicyId</code> and
     * <code>PolicyHash</code>.</p>
     */
    inline PutResourcePolicyResult& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline const Aws::String& GetPolicyHash() const{ return m_policyHash; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(const Aws::String& value) { m_policyHash = value; }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(Aws::String&& value) { m_policyHash = std::move(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline void SetPolicyHash(const char* value) { m_policyHash.assign(value); }

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(const Aws::String& value) { SetPolicyHash(value); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(Aws::String&& value) { SetPolicyHash(std::move(value)); return *this;}

    /**
     * <p>ID of the current policy version. The hash helps to prevent a situation where
     * multiple users attempt to overwrite a policy. You must provide this hash when
     * updating or deleting a policy.</p>
     */
    inline PutResourcePolicyResult& WithPolicyHash(const char* value) { SetPolicyHash(value); return *this;}

  private:

    Aws::String m_policyId;

    Aws::String m_policyHash;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
