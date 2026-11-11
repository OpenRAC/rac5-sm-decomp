/* LEVEL_23:0x14B288 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_001ED970;
extern unsigned char D_001FE3B0[];
extern float D_001F0DF8[];

extern char *func_0226C8(int a0, int a1);
extern int func_022F40(int a0, int a1);
extern void func_14B520(void *a0, int a1);
extern void func_11CFC8(void *a0, void *a1, void *a2, int a3);

void func_14B288(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_0226C8(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_022F40(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_001F0DF8[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_14B520(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_11CFC8(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_001ED970 == 7 && (D_001FE3B0[0xD] >= 1 && D_001FE3B0[0xD] <= 0x3F)) {
        D_001FE3B0[0xD] = 0x80;
    } else if (D_001ED970 == 9 && (D_001FE3B0[0xD] >= 1 && D_001FE3B0[0xD] <= 0x3F)) {
        D_001FE3B0[0xD] = 0x80;
    }
}
