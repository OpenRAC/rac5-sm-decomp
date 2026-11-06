extern unsigned char D_0033A830[];
extern int D_0021F6A0[];
extern void func_0EE780(void *, void *);
extern void func_0EF858(char *, int, void *);

void func_000EF8F0(int param_1)
{
    char local[16];
    int *p;
    int v;

    if (D_0033A830[param_1 * 0x34] == 0) {
        p = (int *)((char *)D_0021F6A0 + param_1 * 0x24);
        v = *p;
        func_0EE780(local, p);
        func_0EF858(D_0033A830 + param_1 * 0x34 + 4, v, local);
        D_0033A830[param_1 * 0x34] = 1;
    }
}
