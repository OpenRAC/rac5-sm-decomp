/* Return the cached matrix pointer for the requested slot. */
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
extern struct GuState gu_state_01F77900; /* 0x01F77900 */

void *GetMatrix__Q34scee3Psp3GumQ44scee3Psp2Gu11EMatrixType(unsigned int slot) {
    return gu_state_01F77900.matrix_stack[slot];
}
