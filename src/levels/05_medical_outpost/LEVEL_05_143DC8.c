/* LEVEL_05:0x143DC8 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_002096F0;
extern unsigned char D_0021CC30[];
extern float D_0020B958[];

extern char *func_0235C0(int a0, int a1);
extern int func_023E38(int a0, int a1);
extern void func_144060(void *a0, int a1);
extern void func_127AC8(void *a0, void *a1, void *a2, int a3);

void func_143DC8(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_0235C0(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_023E38(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_0020B958[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_144060(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_127AC8(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_002096F0 == 7 && (D_0021CC30[0xD] >= 1 && D_0021CC30[0xD] <= 0x3F)) {
        D_0021CC30[0xD] = 0x80;
    } else if (D_002096F0 == 9 && (D_0021CC30[0xD] >= 1 && D_0021CC30[0xD] <= 0x3F)) {
        D_0021CC30[0xD] = 0x80;
    }
}
