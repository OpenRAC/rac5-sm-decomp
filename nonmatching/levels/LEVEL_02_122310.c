/* LEVEL_02.REL:0x122310, bounded 160-byte candidate.
 * Isolated pinned C object: 152 bytes; first linked
 * difference at body byte +5. Not linked into the accepted
 * gate or counted.
 * Reopen: The prologue does not reproduce the three matrix-pointer copies (v1=t2, v0=t1, t4=t3) and keeps the vector in a2. Reopen with a form that forces those copies.
 */
extern void func_121A90(void *a, void *b, float *out);

void func_122310(void *a, void *b, float *v, unsigned long p4,
                 unsigned long p5, float *m0, float *m1, float *m2)
{
    float out[3];

    out[0] = v[0] * m0[0] + v[1] * m0[1] + v[2] * m0[2];
    out[1] = v[0] * m1[0] + v[1] * m1[1] + v[2] * m1[2];
    out[2] = v[0] * m2[0] + v[1] * m2[1] + v[2] * m2[2];
    func_121A90(a, b, out);
}
