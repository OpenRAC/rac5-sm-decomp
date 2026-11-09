/* LEVEL_05:0x199188 -- sets object status bits, releases a held handle, and posts a timed effect. */

extern char *D_001F7BB8;
extern void func_07E1D8(void *h);
extern void func_07E070(void *o, void *g, float f0, float f1, float f2, float f3,
                        int i0, int i1, int i2, int i3, int i4, int i5);

void func_199188(char *o)
{
    char *s;
    char *g;

    o[0x45] = 1;
    *(unsigned int *)(o + 0x64) = *(unsigned int *)(o + 0x64) | 0x8000000;
    *(unsigned int *)(o + 0x68) = 0xFFFFFFFFu;
    *(int *)(o + 0x70) = 0;
    s = *(char **)(o + 0x58);
    if (*(void **)(s + 0x10) != 0) {
        func_07E1D8(*(void **)(s + 0x10));
        *(void **)(s + 0x10) = 0;
    }
    g = D_001F7BB8;
    if (g != 0) {
        func_07E070(o, g, *(float *)(g + 0x14), *(float *)(g + 0x18),
                    *(float *)(g + 0x1C), *(float *)(g + 0x20), 0, 0, 0, 0, 0, 1);
    }
}
