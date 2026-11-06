/* LEVEL_01.REL:0x11BFC8, bounded 160-byte candidate.
 * Isolated pinned C object: 80 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: The retail copies parameters (v1=t2, v0=t1, t4=t3); those copies are not reproduced. Reopen with explicit local copies before the call.
 */
extern void func_0011B748(long p1, long p2, float *v);

void func_0011BFC8(long p1, long p2, float *p3, long p4, long p5,
                  float *p6, float *p7, float *p8)
{
    float v1;
    float v3;
    float v2;
    float a;
    float c;
    float b;

    v1 = p3[0];
    v3 = p3[1];
    v2 = p3[2];
    a = v1 * p6[0] + v3 * p6[1] + v2 * p6[2];
    b = v1 * p8[0] + v3 * p8[1] + v2 * p8[2];
    c = v1 * p7[0] + v3 * p7[1] + v2 * p7[2];
    func_0011B748(p1, p2, &a);
}
