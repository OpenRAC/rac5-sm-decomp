/* LEVEL_01:0x1214E0 -- RAC5 levels, 512-byte body, 13 placements.
 *
 * What it does: a ray/plane reflection with a rotated incidence.
 *
 *   dot = n . v                      (n and v are 4-component vectors)
 *   s   = 1 - dot*dot                 (the sine of the angle, squared)
 *   if (s < 6.103515625e-05f)         (the ray is parallel to the plane)
 *       { v = n ; *out = 0 ; return ; }
 *   sgn = (dot < 0) ? -1 : 1
 *   th  = acosf(sgn * dot)            (= acos(|dot|), the incidence angle)
 *   a   = (*out + th*a0) * a1
 *   t   = a + th*a1
 *   *out = a - t*a0
 *   sq  = sqrtf(s) ; inv = 1/sq
 *   w   = sinf(th - t) * inv * sgn ; u = sinf(t) * inv
 *   v[i] = w*n[i] + u*v[i]            (i = 0..3)
 *
 * Where the form comes from:
 *   - The retail disassembly at LEVEL_01.REL:0x1214E0 was read instruction by
 *     instruction: the nine products are grouped by axis, the twelve
 *     additions are grouped the same way, and the eight components live in
 *     explicit locals (the style of the RAC1 reference
 *     lombyte-depot/src/math/rotations/rotate_vector_by_quaternion.c, where a
 *     quaternion lives in a float[4] array and every component is named).
 *   - The 4-component vector is copied to the stack in three pieces
 *     (v[0..2] at 0($sp)..8($sp), v[3] stays in a callee-saved register), so
 *     the components are named locals, not an array: this is what produces the
 *     retail frame of 0x90 bytes and the twelve callee-saved float registers
 *     f20..f31.
 *   - The threshold 6.103515625e-05f is the exact float constant 0x38800000.
 *
 * Proof: *** EXACT *** at the thirteen placements of the family
 * (LEVEL_01 0x1214E0, LEVEL_06 0x117B48, LEVEL_09 0x11A968, LEVEL_15 0x0E6200,
 * LEVEL_16 0x1018A0, LEVEL_17 0x100EB0, LEVEL_18 0x1000D8, LEVEL_19 0x101748,
 * LEVEL_20 0x0D9FF0, LEVEL_21 0x0E6200, LEVEL_22 0x0FB190, LEVEL_23 0x112350,
 * LEVEL_24 0x117300), profile gnu-ee-trial-divpad.
 *
 * The source is the wave-19 reconstruction, unchanged.  What the wave-19
 * note had measured as a wall was a *profile* wall: with the pinned chain
 * the body is 504 bytes (the two R5900 division-reservation nops are
 * missing); with gnu-ee-trial-divpad it is 512 bytes and exact.
 */
extern float acosf(float);
extern float sinf(float);
extern float sqrtf(float);

void func_1214E0(float *v, float *out, float *n, float a0, float a1)
{
    float v0, v1, v2, v3;
    float n0, n1, n2, n3;
    float dot;
    float s;
    float sgn;
    float th;
    float a;
    float t;
    float sq;
    float inv;
    float w;
    float u;

    n0 = n[0];
    n1 = n[1];
    n2 = n[2];
    n3 = n[3];
    v0 = v[0];
    v1 = v[1];
    v2 = v[2];
    v3 = v[3];

    dot = n0 * v0 + n1 * v1 + n2 * v2 + n3 * v3;
    s = 1.0f - dot * dot;
    if (s < 6.103515625e-05f) {
        v[0] = n0;
        v[1] = n1;
        v[2] = n2;
        v[3] = n3;
        *out = 0.0f;
        return;
    }
    sgn = (dot < 0.0f) ? -1.0f : 1.0f;
    th = acosf(sgn * dot);
    a = (*out + th * a0) * a1;
    t = a + th * a1;
    *out = a - t * a0;
    sq = sqrtf(s);
    inv = 1.0f / sq;
    w = sinf(th - t) * inv * sgn;
    u = sinf(t) * inv;
    v[0] = w * n0 + u * v0;
    v[1] = w * n1 + u * v1;
    v[2] = w * n2 + u * v2;
    v[3] = w * n3 + u * v3;
}
