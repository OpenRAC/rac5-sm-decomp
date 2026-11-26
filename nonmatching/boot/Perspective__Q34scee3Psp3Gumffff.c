/* USA SCUS_976.15 boot: Perspective__Q34scee3Psp3Gumffff, 0x01E829F0.
 * Observed body: 416 bytes, it fills its interval. Measured 26 November 2026:
 * all 416 body bytes are exact after independent SN linking at the retail
 * address under gnu-ee-trial-divpad and gnu-ee-trial-divpad-blockmove only (a
 * level profile that pads each float division with two nops; the default route
 * is 32 bytes shorter), with -O2 -G0 and the default GNU assembler. The
 * default tools are rebuilt, not hash-qualified. This is an unaccepted
 * witness: complete-program integration, boundaries, types and qualification
 * require separate review. No promotion or matching credit is claimed here.
 * Reconstructed from the retail boot. Gum perspective: derives cot(fovy/2)
 * from a short series, builds the clip-space z scale and offset, and
 * multiplies them into the current matrix stack entry, then marks it dirty.
 * The four old third-row values are kept in locals and the scaling stores
 * follow row order 0-3, 4-7, with the fourth-row stores last.
 */
typedef struct { float m[16]; } MATRIX4;
typedef struct { char pad00[4]; int offset; char dirty; char pad09[7]; MATRIX4 *matrix; } tGumState;
extern tGumState gGumState;
void Perspective__Q34scee3Psp3Gumffff(float fovy, float aspect, float n, float f) {
    float h = fovy * 0.5f;
    float cot = 1.0f / h - h * 0.33293006f - h * 0.024216808f * (h * h);
    float c = -(f + n) / (f - n);
    float d = f * -2.0f * n / (f - n);
    float sx = cot / aspect;
    MATRIX4 *m = gGumState.matrix;
    float m8 = m->m[8], m9 = m->m[9], m10 = m->m[10], m11 = m->m[11];

    m->m[8] = m8 * c - m->m[12];
    m->m[9] = m9 * c - m->m[13];
    m->m[10] = m10 * c - m->m[14];
    m->m[11] = m11 * c - m->m[15];
    m->m[0] *= sx;
    m->m[1] *= sx;
    m->m[2] *= sx;
    m->m[3] *= sx;
    m->m[4] *= cot;
    m->m[5] *= cot;
    m->m[6] *= cot;
    m->m[7] *= cot;
    m->m[12] = m8 * d;
    m->m[13] = m9 * d;
    m->m[14] = m10 * d;
    m->m[15] = m11 * d;
    *(char *)((char *)&gGumState + gGumState.offset + 8) = 1;
}
