// Copyright (c) 2015 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_APP_MANIFEST_H_
#define ATOM_APP_MANIFEST_H_

#include "services/service_manager/public/cpp/manifest.h"

const service_manager::Manifest& GetAtomContentBrowserOverlayManifest();
const service_manager::Manifest& GetAtomPackagedServicesOverlayManifest();

#endif  // ATOM_APP_MANIFEST_H_
