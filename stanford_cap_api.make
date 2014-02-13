core = 6.x
api = 2

; Drupal 6.x core:
projects[drupal][version] = 6

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
projects[flexifield][patch][] = "https://drupal.org/files/issues/flexifield-2195233-1.patch"
; AHAH Page Storage
projects[ahah_page_storage][type] = "module"
projects[ahah_page_storage][subdir] = "contrib"
projects[ahah_page_storage][version] = 6.x-1.1
; AHAH Response
projects[ahah_response][type] = "module"
projects[ahah_response][subdir] = "contrib"
projects[ahah_response][version] = 6.x-1.2
; AHAH Script Ensurer
projects[ahah_script_ensurer][type] = "module"
projects[ahah_script_ensurer][subdir] = "contrib"
projects[ahah_script_ensurer][version] = 6.x-1.0
; AHAH Style Ensurer
projects[ahah_style_ensurer][type] = "module"
projects[ahah_style_ensurer][subdir] = "contrib"
projects[ahah_style_ensurer][version] = 6.x-1.0
; jQuery AOP
projects[jquery_aop][type] = "module"
projects[jquery_aop][subdir] = "contrib"
projects[jquery_aop][version] = 6.x-1.0
; Stanford CAP API
projects[stanford_cap_api][type] = "module"
projects[stanford_cap_api][subdir] = "contrib"
projects[stanford_cap_api][download][type] = git
projects[stanford_cap_api][download][url] = "http://kroskoliy@git.trellon.org/stanford-cap-d6"
projects[stanford_cap_api][download][branch] = 6.x-1.x
projects[stanford_cap_api][download][revision] = 957b7001275d1eda197ae27db27e7fa9aec286b9