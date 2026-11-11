/* Quat_Slerp__FP4QUATPC4QUATT1f -- RAC5 levels, 416-byte body, 20 placements.
 *
 * Provenance: the structure was read from the retail disassembly at
 * LEVEL_01.REL:0x122D10, which is byte-identical to the boot routine
 * Quat_Slerp__FP4QUATPC4QUATT1f at SCUS_976.15 0x01E77C80, then compared with
 * the style of the RAC1 reference: in
 * lombyte-depot/src/math/rotations/rotate_vector_by_quaternion.c the
 * quaternion lives in a float[4] array in memory and the sign is unified by
 * negation; rac1-decomp's game/camera.c shows the caller
 * func_001FA5C8(out, from, to, t) with the same four-argument signature.
 *
 * Retail structure:
 *   - the scalar product a.b in float, then the sign is unified: the kept
 *     quaternion is copied to memory (four floats at 0($sp)..0xC($sp)) and
 *     negated when the product is negative;
 *   - the test 1e-4 < (1.0f - product) selects the slerp branch (acosf, then
 *     three sinf and two div.s) against the linear branch (coefficients 1-t
 *     and t);
 *   - the common tail: out = c0*q + c1*b, component by component;
 *   - the function returns no float (the retail leaves $f0 = c1*b.w).
 *
 * Proof: *** EXACT *** at the twenty placements of the lot (416 bytes,
 * profile gnu-ee-trial-divpad, see docs/COMPILER-STATUS.md).
 */
typedef struct { float x, y, z, w; } QUAT;

extern float acosf(float);
extern float sinf(float);

void Quat_Slerp__FP4QUATPC4QUATT1f(QUAT *out, const QUAT *a, const QUAT *b, float t)
{
    float q[4];
    float dot = a->x * b->x + a->y * b->y + a->z * b->z + a->w * b->w;
    float c0, c1;

    if (dot < 0.0f) {
        q[0] = -a->x;
        q[1] = -a->y;
        q[2] = -a->z;
        q[3] = -a->w;
        dot = -dot;
    } else {
        q[0] = a->x;
        q[1] = a->y;
        q[2] = a->z;
        q[3] = a->w;
    }
    if (0.0001f < 1.0f - dot) {
        float theta = acosf(dot);
        float s = sinf(theta);
        c0 = sinf((1.0f - t) * theta) / s;
        c1 = sinf(t * theta) / s;
    } else {
        c0 = 1.0f - t;
        c1 = t;
    }
    out->x = c0 * q[0] + c1 * b->x;
    out->y = c0 * q[1] + c1 * b->y;
    out->z = c0 * q[2] + c1 * b->z;
    out->w = c0 * q[3] + c1 * b->w;
}
