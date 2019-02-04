// Copyright (c) 2015 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#include "atom/app/manifests.h"

#include "base/no_destructor.h"
#include "services/service_manager/public/cpp/manifest_builder.h"

const service_manager::Manifest& GetAtomContentBrowserOverlayManifest() {
  static base::NoDestructor<service_manager::Manifest> manifest{
      service_manager::ManifestBuilder()
          .WithServiceName("content_browser")
          .WithDisplayName("Electron (browser process)")
          .RequireCapability("device", "device:geolocation_control")
          .RequireCapability("proxy_resolver", "factory")
          .RequireCapability("chrome_printing", "converter")
          .RequireCapability("pdf_compositor", "compositor")
          .Build()};
  return *manifest;
}

const service_manager::Manifest& GetAtomPackagedServicesOverlayManifest() {
  static base::NoDestructor<service_manager::Manifest> manifest{
      service_manager::ManifestBuilder()
          .WithServiceName("content_packaged_services")
          .WithDisplayName("Electron Packaged Services")
          .Build()};
  return *manifest;
}
