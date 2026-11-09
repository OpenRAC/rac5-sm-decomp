/* LEVEL_16:0x1360D8 -- calls an optional helper with float fields, then resets a few object fields. */

extern char *D_001BD704;
extern void func_073518(char *s, char *p, float f12, float f13, float f14, float f15, int z1, int z2, int z3, int z4, int z5, int z6);
extern void func_1368F8(char *a0);

void func_1360D8(char *s)
{
    char *p;
    unsigned char *q;
    char *r;
    char *t;

    if (s != 0) {
        p = D_001BD704;
        if (p != 0) {
            func_073518(s, p, *(float *)(p + 0x14), *(float *)(p + 0x18), *(float *)(p + 0x1C), *(float *)(p + 0x20), 0, 0, 0, 0, 0, 1);
        }
        r = *(char **)(s + 0x5C);
        t = *(char **)(s + 0x58);
        s[0x45] = 2;
        q = *(unsigned char **)(s + 0x54);
        func_1368F8(r);
        *(int *)t = 0;
        *(int *)(t + 0x28) = 2;
        if (q[0] != 0) {
            *(int *)(s + 0x70) = 0;
        }
    }
}
