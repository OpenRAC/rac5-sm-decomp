/* LEVEL_24:0x13E928 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_001EB570;
extern unsigned char D_001FCE30[];
extern float D_001ED9D0[];

extern char *func_022400(int a0, int a1);
extern int func_022C78(int a0, int a1);
extern void func_13EBC0(void *a0, int a1);
extern void func_121C50(void *a0, void *a1, void *a2, int a3);

void func_13E928(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_022400(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_022C78(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_001ED9D0[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_13EBC0(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_121C50(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_001EB570 == 7 && (D_001FCE30[0xD] >= 1 && D_001FCE30[0xD] <= 0x3F)) {
        D_001FCE30[0xD] = 0x80;
    } else if (D_001EB570 == 9 && (D_001FCE30[0xD] >= 1 && D_001FCE30[0xD] <= 0x3F)) {
        D_001FCE30[0xD] = 0x80;
    }
}
