/* USA FRONTEND.REL:0x005FA0 (22 November 2026): exact linked bytes under
 * pinned, ported from a sister decompilation twin, held.
 * Its placement is defined unlike the declaration in the accepted caller
 * SYSTEM_ScreenMatrixIsDirty__Fv; and is defined unlike the declaration in the
 * accepted caller SYSTEM_ThroughmodeMatrixIsDirty__Fv.
 * Reconcile the prototypes before promotion. No matching credit.
 */
/* FRONTEND:0x005FA0 -- returns the cached matrix pointer for the requested slot. Ported from rac5-sm-decomp src/boot/GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType.c (GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType). */
struct GuState {
    unsigned char mirroring;  /* 0x00 */
    unsigned char pad01;      /* 0x01 */
    unsigned char pad02;      /* 0x02 */
    unsigned char pad03;      /* 0x03 */
    int matrix_mode;          /* 0x04 */
    unsigned char dirty[8];   /* 0x08 */
    void *current_matrix;     /* 0x10 */
    void *matrix_stack[4];    /* 0x14 */
};
extern struct GuState D_0010EA90;

void *func_005FA0(unsigned int slot) {
    return D_0010EA90.matrix_stack[slot];
}
