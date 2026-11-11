/* LEVEL_16:0x16C330 -- prepares an object's state from a source record and stores the fixed limit and kind. */

extern void func_0CD010(unsigned char *a, int b, float c, float d);
extern void func_16C3B8(unsigned char *o);
extern void func_16BFB8(unsigned char *o);

void func_16C330(unsigned char *a0, unsigned char *a1)
{
    unsigned char *s3;
    unsigned char *s2;
    float tmp[4];

    s3 = *(unsigned char **)(a0 + 0x58);
    s2 = *(unsigned char **)(a0 + 0x54);
    func_0CD010(s3 + 0x28, *(int *)(a1 + 0x59C), 4.0f, *(float *)(a1 + 0x368));
    func_16C3B8(a0);
    func_16BFB8(a0);
    *(float *)(s2 + 0x18) = 22.50044822692871f;
    *(unsigned int *)s3 = (unsigned int)a1;
    a0[0x45] = 3;
}
