/* LEVEL_07:0x14B700 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_0022F4F0;
extern unsigned char D_00246830[];
extern float D_002319A8[];

extern char *func_024BF0(int a0, int a1);
extern int func_025468(int a0, int a1);
extern void func_14B998(void *a0, int a1);
extern void func_12F150(void *a0, void *a1, void *a2, int a3);

void func_14B700(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_024BF0(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_025468(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_002319A8[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_14B998(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_12F150(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_0022F4F0 == 7 && (D_00246830[0xD] >= 1 && D_00246830[0xD] <= 0x3F)) {
        D_00246830[0xD] = 0x80;
    } else if (D_0022F4F0 == 9 && (D_00246830[0xD] >= 1 && D_00246830[0xD] <= 0x3F)) {
        D_00246830[0xD] = 0x80;
    }
}
