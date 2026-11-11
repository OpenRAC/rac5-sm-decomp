/* LEVEL_17:0x1505B8 -- sets a flag word when a byte is nonzero, marks a byte, and calls a helper when a global pointer is set. */

extern char D_001B11C8[];
extern void func_073C48(void *a0, void *a1, int a2, int a3, int a4, int a5, int a6, int a7, float f0, float f1, float f2, float f3);

void func_1505B8(char *a0)
{
    char *v1;
    char *p;

    v1 = *(char **)(a0 + 0x58);
    if (*(unsigned char *)(v1 + 0x64) != 0) {
        *(unsigned int *)(v1 + 0x58) |= 1;
    }
    *(unsigned char *)(a0 + 0x45) = 3;
    p = *(char **)D_001B11C8;
    if (p != 0) {
        func_073C48(a0, p, 0, 0, 0, 0, 0, 1, *(float *)(p + 0x14), *(float *)(p + 0x18), *(float *)(p + 0x1C), *(float *)(p + 0x20));
    }
}
