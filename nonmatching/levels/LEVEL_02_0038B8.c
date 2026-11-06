/* LEVEL_02.REL:0x0038B8, bounded 180-byte candidate.
 * Isolated pinned C object: 180 bytes; first linked
 * difference at body byte +42. Not linked into the accepted
 * gate or counted.
 * Reopen: Fifteen of 45 instructions differ, only in the add.s order. Reopen with named float temporaries that pin the order.
 */
extern float *D_00203ED4;
extern float atan2f(float y, float x);
extern void func_003600(float angle, float v, void *a, void *b);

void func_0038B8(float *vec, void *a1, void *a2, float f)
{
    float *m = D_00203ED4;
    float *p = (float *)((char *)m + 0x54);
    float *q = (float *)((char *)m + 0x6C);
    float ang = atan2f(-(vec[0] * q[0] + vec[1] * q[1] + vec[2] * q[2]),
                       -(vec[0] * p[0] + vec[1] * p[1] + vec[2] * p[2]));

    func_003600(ang, f, a1, a2);
}
