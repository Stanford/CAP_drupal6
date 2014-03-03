core = 6.x
api = 2

; Drupal 6.x core:
projects[] = drupal

; Modules
; --------
; CCK
projects[cck][type] = "module"
projects[cck][subdir] = "contrib"
projects[cck][download][type] = git
projects[cck][download][branch] = 6.x-3.x
projects[cck][download][revision] = 34335e1197016a3d345d0bbf38a79ec419ab4f55
projects[cck][patch][] = "https://drupal.org/files/issues/cck-content.module-541768-36.patch"
; Filefield
projects[filefield][version] = 3.12
projects[filefield][type] = "module"
projects[filefield][subdir] = "contrib"
; Imagefield
projects[imagefield][version] = 3.11
projects[imagefield][type] = "module"
projects[imagefield][subdir] = "contrib"
; Flexifield
projects[flexifield][type] = "module"
projects[flexifield][subdir] = "contrib"
projects[flexifield][download][type] = git
projects[flexifield][download][branch] = 6.x-1.x
projects[flexifield][download][revision] = 957b7001275d1eda197ae27db27e7fa9aec286b9
projects[flexifield][patch][] = "https://drupal.org/files/issues/flexifield-2195233-2.patch"
; AHAH Page Storage
projects[ahah_page_storage][type] = "module"
projects[ahah_page_storage][subdir] = "contrib"
projects[ahah_page_storage][version] = 1.1
; AHAH Response
projects[ahah_response][type] = "module"
projects[ahah_response][subdir] = "contrib"
projects[ahah_response][version] = 1.2
; AHAH Script Ensurer
projects[ahah_script_ensurer][type] = "module"
projects[ahah_script_ensurer][subdir] = "contrib"
projects[ahah_script_ensurer][version] = 1.0
; AHAH Style Ensurer
projects[ahah_style_ensurer][type] = "module"
projects[ahah_style_ensurer][subdir] = "contrib"
projects[ahah_style_ensurer][version] = 1.0
; jQuery AOP
projects[jquery_aop][type] = "module"
projects[jquery_aop][subdir] = "contrib"
projects[jquery_aop][version] = 1.0
; Features
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features][download][type] = git
projects[features][download][branch] = 6.x-1.x
projects[features][download][revision] = 0e7bc91fd23cec19d00e04b9a75f1c89ffe8b59a
; Strongarm
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[strongarm][version] = 2.2
; Ctools
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[ctools][version] = 1.11
; Date
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[date][download][type] = git
projects[date][download][branch] = 6.x-2.x
projects[date][download][revision] = 1389456c76074a1da105a19683e88b0b9012fe7f
; Link
projects[link][type] = "module"
projects[link][subdir] = "contrib"
projects[link][download][type] = git
projects[link][download][branch] = 6.x-2.x
projects[link][download][revision] = 50bd3d7a4201e7f6da6a646214367a225caa5fd4
; Views
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[views][download][type] = git
projects[views][download][branch] = 6.x-3.x
projects[views][download][revision] = eba344a6b9fc149bdf1b72914b8b8c6cfd6c1f54
; Views Bulk Operations
projects[views_bulk_operations][type] = "module"
projects[views_bulk_operations][subdir] = "contrib"
projects[views_bulk_operations][download][type] = git
projects[views_bulk_operations][download][branch] = 6.x-1.x
projects[views_bulk_operations][download][revision] = 12bb5a7ff7256bbc122f6b016af5fcb92e829c33

; Stanford CAP API
projects[stanford_cap_api][type] = "module"
projects[stanford_cap_api][subdir] = "custom"
projects[stanford_cap_api][download][type] = git
projects[stanford_cap_api][download][url] = "http://kroskoliy@git.trellon.org/stanford-cap-d6"
projects[stanford_cap_api][download][branch] = 6.x-1.x
projects[stanford_cap_api][do_recursion] = 0