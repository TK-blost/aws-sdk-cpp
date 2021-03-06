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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/IpPermission.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for AuthorizeSecurityGroupIngress.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AuthorizeSecurityGroupIngressRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AuthorizeSecurityGroupIngressRequest : public EC2Request
  {
  public:
    AuthorizeSecurityGroupIngressRequest();
    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>The CIDR IPv4 address range. You can't specify this parameter when specifying
     * a source security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 type
     * number. For the ICMP/ICMPv6 type number, use <code>-1</code> to specify all
     * types.</p>
     */
    inline int GetFromPort() const{ return m_fromPort; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 type
     * number. For the ICMP/ICMPv6 type number, use <code>-1</code> to specify all
     * types.</p>
     */
    inline void SetFromPort(int value) { m_fromPortHasBeenSet = true; m_fromPort = value; }

    /**
     * <p>The start of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 type
     * number. For the ICMP/ICMPv6 type number, use <code>-1</code> to specify all
     * types.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithFromPort(int value) { SetFromPort(value); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The ID of the security group. Required for a nondefault VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the security group.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline const Aws::Vector<IpPermission>& GetIpPermissions() const{ return m_ipPermissions; }

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline void SetIpPermissions(const Aws::Vector<IpPermission>& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = value; }

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline void SetIpPermissions(Aws::Vector<IpPermission>&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions = std::move(value); }

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithIpPermissions(const Aws::Vector<IpPermission>& value) { SetIpPermissions(value); return *this;}

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithIpPermissions(Aws::Vector<IpPermission>&& value) { SetIpPermissions(std::move(value)); return *this;}

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& AddIpPermissions(const IpPermission& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(value); return *this; }

    /**
     * <p>A set of IP permissions. Can be used to specify multiple rules in a single
     * command.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& AddIpPermissions(IpPermission&& value) { m_ipPermissionsHasBeenSet = true; m_ipPermissions.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline const Aws::String& GetIpProtocol() const{ return m_ipProtocol; }

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline void SetIpProtocol(const Aws::String& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = value; }

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline void SetIpProtocol(Aws::String&& value) { m_ipProtocolHasBeenSet = true; m_ipProtocol = std::move(value); }

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline void SetIpProtocol(const char* value) { m_ipProtocolHasBeenSet = true; m_ipProtocol.assign(value); }

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithIpProtocol(const Aws::String& value) { SetIpProtocol(value); return *this;}

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithIpProtocol(Aws::String&& value) { SetIpProtocol(std::move(value)); return *this;}

    /**
     * <p>The IP protocol name (<code>tcp</code>, <code>udp</code>, <code>icmp</code>)
     * or number (see <a
     * href="http://www.iana.org/assignments/protocol-numbers/protocol-numbers.xhtml">Protocol
     * Numbers</a>). (VPC only) Use <code>-1</code> to specify all protocols. If you
     * specify <code>-1</code>, or a protocol number other than <code>tcp</code>,
     * <code>udp</code>, <code>icmp</code>, or <code>58</code> (ICMPv6), traffic on all
     * ports is allowed, regardless of any ports you specify. For <code>tcp</code>,
     * <code>udp</code>, and <code>icmp</code>, you must specify a port range. For
     * protocol <code>58</code> (ICMPv6), you can optionally specify a port range; if
     * you don't, traffic for all types and codes is allowed.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithIpProtocol(const char* value) { SetIpProtocol(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupName() const{ return m_sourceSecurityGroupName; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline void SetSourceSecurityGroupName(const Aws::String& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = value; }

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline void SetSourceSecurityGroupName(Aws::String&& value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName = std::move(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline void SetSourceSecurityGroupName(const char* value) { m_sourceSecurityGroupNameHasBeenSet = true; m_sourceSecurityGroupName.assign(value); }

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupName(const Aws::String& value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupName(Aws::String&& value) { SetSourceSecurityGroupName(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic, default VPC] The name of the source security group. You can't
     * specify this parameter in combination with the following parameters: the CIDR IP
     * address range, the start of the port range, the IP protocol, and the end of the
     * port range. Creates rules that grant full ICMP, UDP, and TCP access. To create a
     * rule with a specific IP protocol and port range, use a set of IP permissions
     * instead. For EC2-VPC, the source security group must be in the same VPC.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupName(const char* value) { SetSourceSecurityGroupName(value); return *this;}

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline const Aws::String& GetSourceSecurityGroupOwnerId() const{ return m_sourceSecurityGroupOwnerId; }

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const Aws::String& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = value; }

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(Aws::String&& value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId = std::move(value); }

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline void SetSourceSecurityGroupOwnerId(const char* value) { m_sourceSecurityGroupOwnerIdHasBeenSet = true; m_sourceSecurityGroupOwnerId.assign(value); }

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(const Aws::String& value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(Aws::String&& value) { SetSourceSecurityGroupOwnerId(std::move(value)); return *this;}

    /**
     * <p>[EC2-Classic] The AWS account number for the source security group, if the
     * source security group is in a different account. You can't specify this
     * parameter in combination with the following parameters: the CIDR IP address
     * range, the IP protocol, the start of the port range, and the end of the port
     * range. Creates rules that grant full ICMP, UDP, and TCP access. To create a rule
     * with a specific IP protocol and port range, use a set of IP permissions
     * instead.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithSourceSecurityGroupOwnerId(const char* value) { SetSourceSecurityGroupOwnerId(value); return *this;}

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 code
     * number. For the ICMP/ICMPv6 code number, use <code>-1</code> to specify all
     * codes.</p>
     */
    inline int GetToPort() const{ return m_toPort; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 code
     * number. For the ICMP/ICMPv6 code number, use <code>-1</code> to specify all
     * codes.</p>
     */
    inline void SetToPort(int value) { m_toPortHasBeenSet = true; m_toPort = value; }

    /**
     * <p>The end of port range for the TCP and UDP protocols, or an ICMP/ICMPv6 code
     * number. For the ICMP/ICMPv6 code number, use <code>-1</code> to specify all
     * codes.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithToPort(int value) { SetToPort(value); return *this;}

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline AuthorizeSecurityGroupIngressRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:
    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;
    int m_fromPort;
    bool m_fromPortHasBeenSet;
    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;
    Aws::String m_groupName;
    bool m_groupNameHasBeenSet;
    Aws::Vector<IpPermission> m_ipPermissions;
    bool m_ipPermissionsHasBeenSet;
    Aws::String m_ipProtocol;
    bool m_ipProtocolHasBeenSet;
    Aws::String m_sourceSecurityGroupName;
    bool m_sourceSecurityGroupNameHasBeenSet;
    Aws::String m_sourceSecurityGroupOwnerId;
    bool m_sourceSecurityGroupOwnerIdHasBeenSet;
    int m_toPort;
    bool m_toPortHasBeenSet;
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
