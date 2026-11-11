/* LEVEL_18:0x171028 -- placement copy of LEVEL_16_16C330.c: prepares an object's state from a source record and stores the fixed limit and kind. */

extern void func_0CBFE8(unsigned char *a, int b, float c, float d);
extern void func_1710B0(unsigned char *o);
extern void func_170CB0(unsigned char *o);

void func_171028(unsigned char *a0, unsigned char *a1)
{
    unsigned char *s3;
    unsigned char *s2;
    float tmp[4];

    s3 = *(unsigned char **)(a0 + 0x58);
    s2 = *(unsigned char **)(a0 + 0x54);
    func_0CBFE8(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_1710B0(a0);
    func_170CB0(a0);
    *(float *)(s2 + 0x18) = 22.50044822692871f;
    *(unsigned int *)s3 = (unsigned int)a1;
    a0[0x45] = 3;
}
