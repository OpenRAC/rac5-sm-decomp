/* USA SCUS_976.15 boot: TexPerspective__Q34scee3Psp3Gumffffff, 0x01E82B90.
 * Observed body: 380 bytes, followed by alignment and the start of a different
 * routine. Measured 26 November 2026: all 380 body bytes are exact after
 * independent SN linking at the retail address under gnu-ee-trial-divpad only
 * (a level profile that pads each float division with two nops), with -O2 -G0
 * and the default GNU assembler. The default tools are rebuilt, not
 * hash-qualified. This is an unaccepted witness: complete-program integration,
 * boundaries, types and qualification require separate review. No promotion or
 * matching credit is claimed here. Reconstructed from the retail boot. Gum
 * texture perspective: derives cot(fovy/2) from a short series, scales the
 * first two rows by it (the first also by the aspect), folds the offsets into
 * the third row, and marks the stack entry dirty. The scaling stores must be
 * written in row order 0-3, 4-7; writing the fourth element of each row first
 * changes the register allocation.
 */
typedef struct { float m[16]; } MATRIX4;

typedef struct {
    char pad00[4];
    int offset;
    char dirty;
    char pad09[7];
    MATRIX4 *matrix;
} tGumState;

extern tGumState gGumState; /* 0x01F77900 */

void TexPerspective__Q34scee3Psp3Gumffffff(float fovy, float aspect, float sx, float sy, float ox, float oy) {
    float h = fovy * 0.5f;
    float cot = 1.0f / h - h * 0.33293006f - h * 0.024216808f * (h * h);
    MATRIX4 *m = gGumState.matrix;

    sx = sx * cot / aspect;
    sy = sy * cot;
    m->m[8] = -(m->m[0] * ox + m->m[4] * oy + m->m[8]);
    m->m[9] = -(m->m[1] * ox + m->m[5] * oy + m->m[9]);
    m->m[10] = -(m->m[2] * ox + m->m[6] * oy + m->m[10]);
    m->m[11] = -(m->m[3] * ox + m->m[7] * oy + m->m[11]);
    m->m[0] *= sx;
    m->m[1] *= sx;
    m->m[2] *= sx;
    m->m[3] *= sx;
    m->m[4] *= sy;
    m->m[5] *= sy;
    m->m[6] *= sy;
    m->m[7] *= sy;
    *(char *)((char *)&gGumState + gGumState.offset + 8) = 1;
}
