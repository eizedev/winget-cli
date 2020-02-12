﻿// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.
#pragma once

#define NOMINMAX
#include <Windows.h>

#include <Public/AppInstallerFileLogger.h>
#include <Public/AppInstallerStrings.h>
#include <Public/AppInstallerLogging.h>
#include <Public/AppInstallerTelemetry.h>
#include <Microsoft/SQLiteIndex.h>

#include <wil/result_macros.h>

#include <filesystem>
#include <memory>
#include <mutex>
#include <string>