/**
 *  Copyright 2014-2016 CyberVision, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

/*
 * This header provides several bindings for ESP8266 target that abstracts
 * an implementation of its features. Right now it contains only
 * console and target initialisation routines, but it must be extended
 * if required.
 *
 */

#ifndef ESP8266_SUPPORT_H_
#define ESP8266_SUPPORT_H_

#include <stdio.h>

/* Demo print routine. printf implementation is available on this platform. */
#define demo_printf(msg, ...) printf((msg), ##__VA_ARGS__)

/* Initialises a target. Zero value means success, negative - errors.
 *
 * For this particular target this will eventually try to connect to
 * the WiFi spot using SSID and password supplied during build.
 */
int target_initialize(void);

#endif //ESP8266_SUPPORT_H_