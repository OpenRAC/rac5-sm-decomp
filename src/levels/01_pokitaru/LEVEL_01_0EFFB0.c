/* LEVEL_01:0x0EFFB0 -- placement copy of LEVEL_01_0F0430.c. */
extern unsigned char D_00331430[];
extern int D_00216720[];
extern void func_0EEE40(void *, void *);
extern void func_0EFF18(char *, int, void *);

void func_000EFFB0(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00331430[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00216720 + param_1 * 0x24);
        v = *p;
        func_0EEE40(local, p);
        func_0EFF18(D_00331430 + param_1 * 0x34 + 4, v, local);
        D_00331430[param_1 * 0x34] = 1;
    }
}
