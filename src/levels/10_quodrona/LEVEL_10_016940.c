extern int D_00223780;
extern char *D_001FCFAC;

void func_028060(int);

void func_016940(void)
{
    int v = D_00223780;

    *(int *)(D_001FCFAC + 0x1C6C) = v;
    *(char *)(D_001FCFAC + 0x10513) = 0;
    func_028060(v);
}
