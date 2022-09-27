/*
 * Copyright (C) 2021-2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <libvariant.h>

#include <vector>

void search_variant(const std::vector<variant_info>& variants);

<<<<<<< HEAD
void set_variant_props(const variant_info& variant);
=======
    std::string brand;
    std::string device;
    std::string name;
    std::string marketname;
    std::string mod_device;
    std::string model;
    std::string build_fingerprint;

    bool nfc;
} variant_info_t;

void search_variant(const std::vector<variant_info_t> variants);

void set_variant_props(const variant_info_t variant);

#endif // LIBINIT_VARIANT_H
>>>>>>> d52a849 (sm8250-common: libinit: Add support of hiding device product name)
