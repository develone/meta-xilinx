
# Add MicroBlaze Patches
FILESEXTRAPATHS_append := "${THISDIR}/files:"
SRC_URI_append += " \
		file://0001-Patch-microblaze-Enable-DWARF-exception-handling-sup.patch \
		file://0002-Patch-microblaze-Add-4-byte-implementation-for-atomi.patch \
		file://0003-Patch-microblaze-Extend-jump-insn-to-accept-bri-to-S.patch \
		file://0004-Patch-microblaze-Add-TARGET_ASM_OUTPUT_MI_THUNK-to-s.patch \
		file://0005-Patch-microblaze-Add-fstack-usage-support.patch \
		file://0006-Patch-microblaze-Remove-SECONDARY_MEMORY_NEEDED.patch \
		file://0007-Patch-microblaze-Add-SIZE_TYPE-and-PTRDIFF_TYPE-to-m.patch \
		file://0008-Patch-microblaze-Add-branch_compare-instruction.patch \
		file://Patch-microblaze-Fix-bswaphi2-implementation.patch \
		file://Patch-microblaze-cstoresf4-add-mode-and-ordered_comp.patch \
		"
