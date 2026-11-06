extern unsigned char D_00331538[];
extern int D_00216800[];
extern void func_0EEE40(void *, void *);
extern void func_0F0390(char *, int, void *);

void func_000F0430(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_00331538[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_00216800 + param_1 * 0x24);
        v = *p;
        func_0EEE40(local, p);
        func_0F0390(D_00331538 + param_1 * 0x34 + 4, v, local);
        D_00331538[param_1 * 0x34] = 1;
    }
}
