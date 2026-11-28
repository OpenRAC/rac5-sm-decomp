/* USA SCUS_976.15 boot: MCPTRANS_FALL_UpdateCamera__Ff, 0x01E6CED8.
 * Observed body: 168 bytes, filling its next-label interval (the jr ra and
 * its delay slot are the last two words).
 * Measured 28 November 2026: all 168 body bytes are exact after an
 * independent link at the retail address under the default pinned route and
 * gnu-ee-trial, -O2 -G0, default GNU assembler. Local exactness with rebuilt
 * tools is not qualification, promotion or C matching credit.
 * Reconstructed from the retail boot. It resets the module's camera matrix
 * to the identity matrix with a four-byte-aligned structure assignment
 * (blocker 07) and advances the module's camera timer by dt.
 * Source shape that mattered: the retail leaves the matrix address in the
 * return register at exit, which only a returned pointer reproduces; a void
 * function compiles to 164 bytes (first difference at byte 2, the missing
 * address computation). The return type is not part of the mangled name, and
 * the accepted caller MCP_UpdateCameraCB__FPfT014CameraSystemIDPv declares
 * these functions void and ignores the value; that prototype conflict needs
 * review before promotion. The matrix and the timer have no symbol names.
 */
typedef struct MATRIX4 { float m[16]; } MATRIX4;
extern MATRIX4 g_identityMatrix;
extern MATRIX4 D_01F67CC8;
extern float D_01EF071C;

MATRIX4 *MCPTRANS_FALL_UpdateCamera__Ff(float dt) {
    D_01F67CC8 = g_identityMatrix;
    D_01EF071C += dt;
    return &D_01F67CC8;
}
