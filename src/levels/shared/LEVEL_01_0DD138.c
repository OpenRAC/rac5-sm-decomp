/* LEVEL_01:0x0DD138 -- RAC5 levels, 496-byte body, 20 placements.
 *
 * What it does: world-space point of a scaled, rotated object, pulled toward
 * a target point by at most half a radius.
 *
 *   The object carries a 4x4 matrix (16-byte rows) and a 3-component scale.
 *   The point is  m[3][0..2]  +  scale[0]*m[0][0..2]
 *                        +  scale[1]*m[1][0..2]
 *                        +  scale[2]*m[2][0..2].
 *   The target point sits at offset 0x30 of the third argument; the distance
 *   to the computed point is compared with a threshold; if the two points do
 *   not coincide, the step is shortened to at most half the radius.
 *
 * Where the form comes from:
 *   - The retail disassembly at LEVEL_01.REL:0x0DD138 was read instruction by
 *     instruction.  The three pointer parameters are each *copied* into their
 *     own register at the top of the body:
 *         daddu $a3, $a1, $zero   (the object)
 *         daddu $t0, $a2, $zero   (the target)
 *         daddu $s0, $a0, $zero   (the output)
 *     and the null test is on the *target* copy, before any arithmetic:
 *         beqz $t0, ...
 *     A source that keeps the three parameters as three distinct locals, and
 *     that does the null test first, reproduces those copies exactly; a
 *     source that folds the test into the pointer arithmetic (as the wave-19
 *     reconstruction did) does not.
 *   - The matrix rows are 16 bytes apart, so the matrix is a float[4][4]
 *     whose rows are indexed as m[1], m[2], m[3]; the wave-19 reconstruction
 *     used 8-byte rows and was therefore wrong on the structure.
 *   - The 0.5f and 2.3841858e-07f constants are the exact retail values
 *     (0x3F000000 and 0x34800000).
 *
 * Proof: *** EXACT *** at the twenty placements of the family
 * (LEVEL_01 0x0DD138, LEVEL_02 0x0E3AC8, LEVEL_03 0x0DCF20,
 * LEVEL_04 0x0E29F8, LEVEL_05 0x0DB470, LEVEL_06 0x0D7A38,
 * LEVEL_07 0x0DEF28, LEVEL_08 0x0E8108, LEVEL_09 0x0DA3E8,
 * LEVEL_10 0x0DE578, LEVEL_15 0x0BC9F8, LEVEL_16 0x0CC778,
 * LEVEL_17 0x0CBA48, LEVEL_18 0x0CB750, LEVEL_19 0x0CC050,
 * LEVEL_20 0x0B5F28, LEVEL_21 0x0BC9F8, LEVEL_22 0x0CAEE0,
 * LEVEL_23 0x0D3CF8, LEVEL_24 0x0D6830), profile gnu-ee-trial-divpad.
 */
extern float sqrtf(float);

typedef struct {
    float scale[3];            /* 0x00 */
    float *mat;                /* 0x0C */
    float pad[6];              /* 0x10 */
    float radius;              /* 0x28 */
} Obj;

typedef struct {
    float m[4][4];
} Mat4;

typedef struct {
    char pad[0x30];
    float pos[3];
} Spot;

void func_0DD138(float *out, Obj *o, Spot *s)
{
    Obj *src = o;
    Spot *dst = s;
    float *m;
    float *r1;
    float *r2;
    float *r3;
    float *p;
    float t[3];
    float d2;
    float half;

    if (dst == 0)
        return;

    m = src->mat;
    r1 = m + 4;
    r2 = m + 8;
    r3 = m + 12;
    p = dst->pos;

    t[0] = src->scale[0] * m[0];
    t[1] = src->scale[0] * m[1];
    t[2] = src->scale[0] * m[2];
    out[0] = r3[0] + t[0];
    out[1] = r3[1] + t[1];
    out[2] = r3[2] + t[2];

    t[0] = src->scale[1] * r1[0];
    t[1] = src->scale[1] * r1[1];
    t[2] = src->scale[1] * r1[2];
    out[0] = out[0] + t[0];
    out[1] = out[1] + t[1];
    out[2] = out[2] + t[2];

    t[0] = src->scale[2] * r2[0];
    t[1] = src->scale[2] * r2[1];
    t[2] = src->scale[2] * r2[2];
    out[0] = out[0] + t[0];
    out[1] = out[1] + t[1];
    out[2] = out[2] + t[2];

    t[0] = p[0] - out[0];
    t[1] = p[1] - out[1];
    t[2] = p[2] - out[2];
    d2 = t[0] * t[0] + t[1] * t[1] + t[2] * t[2];
    half = src->radius * 0.5f;

    if (d2 < 2.3841858e-07f) {
        /* the two points coincide: keep the whole step */
    } else {
        float len = sqrtf(d2);
        float f = half / len;
        t[0] = t[0] * f;
        t[1] = t[1] * f;
        t[2] = t[2] * f;
    }

    out[0] = out[0] + t[0];
    out[1] = out[1] + t[1];
    out[2] = out[2] + t[2];
}
