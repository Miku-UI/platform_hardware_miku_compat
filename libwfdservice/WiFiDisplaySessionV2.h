/*
 * Copyright (C) 2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

struct WiFiDisplaySession {
#ifdef __LP64__
    char _pad1[120];
#else
    char _pad1[64];
#endif
    int flags;
    bool ready;
    bool enabled;
} __attribute__((packed));
