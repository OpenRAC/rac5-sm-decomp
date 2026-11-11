/* LEVEL_15:0x115180 -- placement copy of LEVEL_01_0EFFB0.c: placement copy of LEVEL_01_0F0430.c. */
extern unsigned char D_002F2960[];
extern int D_00170690[];
extern void func_113F88(void *, void *);
extern void func_1150E8(char *, int, void *);

void func_00115180(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_002F2960[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00170690 + param_1 * 0x24);
        v = *p;
        func_113F88(local, p);
        func_1150E8(D_002F2960 + param_1 * 0x34 + 4, v, local);
        D_002F2960[param_1 * 0x34] = 1;
    }
}
