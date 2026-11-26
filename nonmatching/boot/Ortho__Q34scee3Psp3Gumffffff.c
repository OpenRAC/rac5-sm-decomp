/* USA SCUS_976.15 boot: Ortho__Q34scee3Psp3Gumffffff, 0x01E82818.
 * Observed body: 472 bytes, it fills its interval. Measured 26 November 2026:
 * all 472 body bytes are exact after independent SN linking at the retail
 * address under gnu-ee-trial-divpad (a level profile that pads each float
 * division with two nops; the compile under gnu-ee-trial-divpad-blockmove also
 * matches every instruction word, not audited), with -O2 -G0 and the default
 * GNU assembler. The default route, gnu-ee-trial and sdk991111 give 448 bytes
 * (no float division pad). The default tools are rebuilt, not hash-qualified.
 * This is an unaccepted witness: complete-program integration, boundaries,
 * types and qualification require separate review. No promotion or matching
 * credit is claimed here. Reconstructed from the retail boot. Gum orthographic
 * projection: reciprocals of the three extents, folds the centre offsets into
 * the fourth row, scales the first three rows and marks the stack entry dirty.
 * The reciprocals are doubled in place (the depth one also negated) rather
 * than copied into separate scale variables: the depth reciprocal, set twice
 * through a temporary, is left to the global allocator, which gives it the
 * last free float register as in retail.
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

void Ortho__Q34scee3Psp3Gumffffff(float l, float r, float b, float t, float n, float f) {
    float ix = 1.0f / (r - l);
    float iy = 1.0f / (t - b);
    float iz = 1.0f / (f - n);
    float tx = (r + l) * ix;
    float ty = (t + b) * iy;
    float tz = (f + n) * iz;
    MATRIX4 *m = gGumState.matrix;

    ix = ix + ix;
    iy = iy + iy;
    iz = -(iz + iz);

    m->m[12] = m->m[12] - (m->m[0] * tx + m->m[4] * ty + m->m[8] * tz);
    m->m[13] = m->m[13] - (m->m[1] * tx + m->m[5] * ty + m->m[9] * tz);
    m->m[14] = m->m[14] - (m->m[2] * tx + m->m[6] * ty + m->m[10] * tz);
    m->m[15] = m->m[15] - (m->m[3] * tx + m->m[7] * ty + m->m[11] * tz);
    m->m[0] *= ix;
    m->m[1] *= ix;
    m->m[2] *= ix;
    m->m[3] *= ix;
    m->m[4] *= iy;
    m->m[5] *= iy;
    m->m[6] *= iy;
    m->m[7] *= iy;
    m->m[8] *= iz;
    m->m[9] *= iz;
    m->m[10] *= iz;
    m->m[11] *= iz;
    *(char *)((char *)&gGumState + gGumState.offset + 8) = 1;
}
