/* USA SCUS_976.15 boot: ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo, 0x01E89C70.
 * Observed body: 60 bytes, followed by one zero alignment word.
 * Measured 14 November 2026: all 60 body bytes are exact after independent
 * SN linking at the retail address under both the rebuilt default GNU route
 * and gnu-ee-trial, with -O2 -G0 and the default GNU assembler.
 * The default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Adapted from the accepted LEVEL_01 helper in this repository, with the boot
 * globals and the accepted void FastMemCopy prototype. The unsigned count
 * preserves the retail low-word multiplication without signed overflow.
 * This is a local byte-offset view: count at +4 and default-component pointer
 * at +0xC; it does not introduce a shared complete skeleton layout. The global
 * skeleton pointer is written before reading those fields, as in retail.
 * The typed field-view trial changes that order and remains nonmatching.
 */
extern char *g_pSkeletonInfo;
extern unsigned char boneComponents[];
extern void FastMemCopy__FPvPCvUi(void *, const void *, unsigned int);

void ANIM_SetAllComponentsDefault__FP16GDE_SkeletonInfo(char *skeleton) {
    g_pSkeletonInfo = skeleton;
    FastMemCopy__FPvPCvUi(boneComponents, *(void **)(skeleton + 0xC),
                         *(unsigned int *)(skeleton + 4) * 3u);
}
