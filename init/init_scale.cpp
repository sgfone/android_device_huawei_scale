/*
   Copyright (c) 2014, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <cstdlib>
#include <fstream>
#include <string>

#include "vendor_init.h"
#include "property_service.h"
#include "log.h"
#include "util.h"

#include "init_msm8909.h"

void init_target_properties()
{
    std::ifstream fin;
    std::string buf;

    fin.open("/proc/app_info");
    while (getline(fin, buf))
        if (buf.find("huawei_fac_product_name") != std::string::npos)
            break;
    fin.close();
    
    property_set("qemu.hw.mainkeys", "0");

    /* SCL-AL00 */
    if (buf.find("SCL-AL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-AL00");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-AL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-CL00 */
    if (buf.find("SCL-CL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-CL00");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-CL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-L01 */
    if (buf.find("SCL-L01") != std::string::npos) {
        property_set("ro.product.model", "SCL-L01");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-L01");
    }
    /* SCL-L02 */
    if (buf.find("SCL-L02") != std::string::npos) {
        property_set("ro.product.model", "SCL-L02");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-L02");
    }
    /* SCL-L03 */
    if (buf.find("SCL-L03") != std::string::npos) {
        property_set("ro.product.model", "SCL-L03");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-L03");
    }
    /* SCL-L04 */
    if (buf.find("SCL-L04") != std::string::npos) {
        property_set("ro.product.model", "SCL-L04");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-L04");
    }
    /* SCL-L21 */
    if (buf.find("SCL-L21") != std::string::npos) {
        property_set("ro.product.model", "SCL-L21");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-L21");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-TL00 */
    if (buf.find("SCL-TL00") != std::string::npos) {
        property_set("ro.product.model", "SCL-TL00");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-TL00");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-TL10 */
    if (buf.find("SCL-TL10") != std::string::npos) {
        property_set("ro.product.model", "SCL-TL10");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-TL10");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-U03 */
    if (buf.find("SCL-U03") != std::string::npos) {
        property_set("ro.product.model", "SCL-U03");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-U03");
    }
    /* SCL-U21 */
    if (buf.find("SCL-U21") != std::string::npos) {
        property_set("ro.product.model", "SCL-U21");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-U21");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-U23 */
    if (buf.find("SCL-U23") != std::string::npos) {
        property_set("ro.product.model", "SCL-U23");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-U23");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
    /* SCL-U31 */
    if (buf.find("SCL-U31") != std::string::npos) {
        property_set("ro.product.model", "SCL-U31");
        property_set("ro.product.device", "scale");
        property_set("ro.build.product", "SCL-U31");
        property_set("ro.config.dsds_mode", "umts_gsm");
        property_set("persist.dsds.enabled", "true");
        property_set("persist.radio.multisim.config", "dsds");
        property_set("ro.telephony.ril.config", "simactivation");
        property_set("persist.radio.dont_use_dsd", "true");
        property_set("ro.multi.rid", "true");
        property_set("ro.config.hw_showSimName", "true");
        property_set("ro.dual.sim.phone", "true");
    }
}
