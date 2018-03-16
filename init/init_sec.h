#ifndef INIT_SEC_H
#define INIT_SEC_H

#include <string.h>

enum device_variant {
    VARIANT_J710F = 0,
    VARIANT_J710FN,
    VARIANT_J710K,
    VARIANT_J710GN,
    VARIANT_J710MN,
    VARIANT_MAX
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant J710F_model = {
    .model = "SM-J710F",
    .codename = "j7xeltexx"
};

static const variant J710FN_model = {
    .model = "SM-J710FN",
    .codename = "j7xelte"
};

static const variant J710K_model = {
    .model = "SM-J710K",
    .codename = "j7xeltekk"
};

static const variant J710GN_model = {
    .model = "SM-J710GN",
    .codename = "j7xeltedx"
};

static const variant J710MN_model = {
    .model = "SM-J710MN",
    .codename = "j7xelteub"
};

static const variant *all_variants[VARIANT_MAX] = {
    &J710F_model,
    &J710FN_model,
    &J710K_model,
    &J710GN_model,
    &J710MN_model
};

#endif // INIT_SEC_H
