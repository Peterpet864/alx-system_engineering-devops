# Issue Fixed

![Problem Solved](https://media.tenor.com/cMUJcoBwdt0AAAAC/i-fixed-it-alli-speed.gif)

## Issue Summary

**Duration:** May 30, 2023, 14:00 - May 30, 2023, 19:00 (UTC)
Impact: The web debugging service experienced a complete outage during the specified duration. Users were unable to access the service, resulting in a 100% service disruption.
___

## Timeline

- **Issue Detected:** May 30, 2023, 14:00 (UTC)
- **Issue Detection Method:** Monitoring alerts indicated a sudden drop in service availability.
**Actions Taken:** The investigation initially focused on the backend infrastructure, assuming a potential network or server issue. Logs and system metrics were analysed.
- **Misleading Investigation:** The team initially suspected a database bottleneck, leading to extensive database profiling and query optimization attempts.
- **Escalation:** After exhausting initial investigations, the incident was escalated to the senior engineering team for further assistance.
- **Resolution:** The root cause was identified as a misconfigured load balancer, and the issue was resolved by correcting the load balancer configuration.

___

## Root Cause and Resolution

The root cause of the outage was a misconfigured load balancer. Due to a recent infrastructure update, the load balancer's configuration became inconsistent with the backend server pool. As a result, incoming traffic was not being distributed correctly, leading to the complete service outage.

To resolve the issue, the load balancer configuration was corrected to align with the backend server pool. The correct server pool was reconfigured, and a thorough validation was performed to ensure the load balancer was properly distributing traffic across the available servers.

___

## Corrective and Preventative Measures

1. **Improve Infrastructure Automation:** Implement infrastructure-as-code practices to ensure consistent and reproducible configurations across the entire stack.
2. **Enhance Monitoring:** Implement proactive monitoring to detect load balancer configuration inconsistencies or anomalies, enabling early detection of potential issues.
3. **Load Balancer Configuration Validation:** Establish a regular validation process for load balancer configurations to ensure they align with the backend server pool and prevent future misconfigurations.
4. **Incident Response Training:** Conduct regular incident response training to familiarize the team with proper escalation procedures and investigation techniques, reducing time-to-resolution in future incidents.

___

## Tasks to Address the Issue

1. Review and document the load balancer configuration process to identify areas of improvement.
2. Implement infrastructure-as-code tools `(e.g., Terraform, Ansible)` to automate load balancer provisioning and configuration.
3. Set up monitoring alerts for load balancer-related metrics, such as backend server availability and request distribution.
4. Establish a recurring validation process to compare the load balancer configuration against the actual backend server pool.
5. Conduct an incident response workshop to refine escalation procedures and enhance collaboration during critical incidents.

By addressing these corrective and preventative measures, we aim to mitigate the risk of similar outages in the future, enhance the reliability of our web debugging service, and provide uninterrupted access to our users.
