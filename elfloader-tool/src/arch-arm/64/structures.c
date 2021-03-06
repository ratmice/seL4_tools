/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(NICTA_GPL)
 */

#include "../elfloader.h"
#include "../stdint.h"

#include "structures.h"

/* Paging structures for kernel mapping */
uint64_t _boot_pgd_up[BIT(PGD_BITS)] ALIGN(BIT(PGD_SIZE_BITS));
uint64_t _boot_pud_up[BIT(PUD_BITS)] ALIGN(BIT(PUD_SIZE_BITS));
uint64_t _boot_pmd_up[BIT(PMD_BITS)] ALIGN(BIT(PMD_SIZE_BITS));

/* Paging structures for identity mapping */
uint64_t _boot_pgd_down[BIT(PGD_BITS)] ALIGN(BIT(PGD_SIZE_BITS));
uint64_t _boot_pud_down[BIT(PUD_BITS)] ALIGN(BIT(PUD_SIZE_BITS));
