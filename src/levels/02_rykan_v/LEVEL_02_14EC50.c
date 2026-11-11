/* LEVEL_02:0x14EC50 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_0022F770;
extern unsigned char D_00248430[];
extern float D_00231DD8[];

extern char *func_024F88(int a0, int a1);
extern int func_025800(int a0, int a1);
extern void func_14EEE8(void *a0, int a1);
extern void func_132500(void *a0, void *a1, void *a2, int a3);

void func_14EC50(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_024F88(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_025800(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_00231DD8[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_14EEE8(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_132500(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_0022F770 == 7 && (D_00248430[0xD] >= 1 && D_00248430[0xD] <= 0x3F)) {
        D_00248430[0xD] = 0x80;
    } else if (D_0022F770 == 9 && (D_00248430[0xD] >= 1 && D_00248430[0xD] <= 0x3F)) {
        D_00248430[0xD] = 0x80;
    }
}
