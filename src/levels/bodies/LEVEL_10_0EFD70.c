extern unsigned char D_0033A938[];
extern int D_0021F780[];
extern void func_0EE780(void *, void *);
extern void func_0EFCD0(char *, int, void *);

void func_000EFD70(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0033A938[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0021F780 + param_1 * 0x24);
        v = *p;
        func_0EE780(local, p);
        func_0EFCD0(D_0033A938 + param_1 * 0x34 + 4, v, local);
        D_0033A938[param_1 * 0x34] = 1;
    }
}
