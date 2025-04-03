/*
 * Copyright (C) 2025 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

struct WiFiDisplaySession {
#ifdef __LP64__
    char _pad1[30];
#else
    char _pad1[16];
#endif
    int flags;
#ifdef __LP64__
    char _pad2[90];
#else
    char _pad2[48];
#endif
    bool ready;
    bool enabled;
} __attribute__((packed));
