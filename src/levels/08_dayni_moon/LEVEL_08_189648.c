/* LEVEL_08:0x189648 -- marks a record as active, initialises ten 0x54-byte slots through a helper, then forwards the global item to a render helper. */

extern char D_00261A40[];
extern char D_003E7BA0[];

extern void func_0F8A50(char *s, char *o);
extern void func_088940(char *a0, char *a1, float f0, float f1, float f2, float f3, int a2, int a3, int t0, int t1, int t2, int t3);

void func_189648(char *s2)
{
    char *s0;
    char *p;
    char *base;
    unsigned int i;

    *(unsigned char *)(s2 + 0x45) = 2;
    *(float *)(s2 + 0x70) = 15.0f;
    s0 = *(char **)(s2 + 0x58) + 4;
    for (i = 0; i < 10; i++) {
        func_0F8A50(s0, s2);
        *(int *)(s0 + 0x1C) = (int)D_00261A40;
        s0 += 0x54;
    }
    base = D_003E7BA0;
    p = *(char **)(base + 0x1C);
    if (p != 0) {
        func_088940(s2, p, *(float *)(p + 0x14), *(float *)(p + 0x18), *(float *)(p + 0x1C), *(float *)(p + 0x20), 0, 0, 0, 0, 0, 1);
    }
}
