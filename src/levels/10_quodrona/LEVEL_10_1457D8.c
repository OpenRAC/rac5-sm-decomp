/* LEVEL_10:0x1457D8 -- placement copy of LEVEL_01_1483D8.c: switches an object into one of two modes, updating its state record and a status byte. */

extern int D_00223780;
extern unsigned char D_0023A330[];
extern float D_00225A78[];

extern char *func_023F90(int a0, int a1);
extern int func_024808(int a0, int a1);
extern void func_145A70(void *a0, int a1);
extern void func_129FB0(void *a0, void *a1, void *a2, int a3);

void func_1457D8(char *a0, char a1, char a2)
{
    char *s1;
    char *s2;
    char *p;
    int idx;

    s2 = *(char **)(a0 + 0x58);
    s1 = *(char **)s2;
    p = func_023F90(2, *(int *)(s1 + 0xF8));
    *(int *)(p + 0x40) = *(int *)(p + 0x40) - 1;
    idx = 0;
    if (func_024808(2, *(int *)(s1 + 0xF8)) != 0) {
        idx = 1;
    }
    *(float *)(s2 + 4) = D_00225A78[idx];
    if (a1 == 1 && *(int *)(s2 + 0xC) != 0) {
        func_145A70(*(void **)(s2 + 0xC), a2);
        *(float *)(s2 + 0xB4) = 0.0f;
        a0[0x45] = 6;
    } else {
        func_129FB0(a0, s2 + 8, s2 + 0x68, a2);
        *(float *)(s2 + 0xB4) = 0.03333333507180214f;
        s2[0xB9] = 0;
        a0[0x45] = 4;
    }
    if (D_00223780 == 7 && (D_0023A330[0xD] >= 1 && D_0023A330[0xD] <= 0x3F)) {
        D_0023A330[0xD] = 0x80;
    } else if (D_00223780 == 9 && (D_0023A330[0xD] >= 1 && D_0023A330[0xD] <= 0x3F)) {
        D_0023A330[0xD] = 0x80;
    }
}
