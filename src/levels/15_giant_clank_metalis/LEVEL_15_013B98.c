extern int D_0016EF70;
extern char *D_00148C2C;

void func_022498(int);

void func_013B98(void)
{
    int v = D_0016EF70;

    *(int *)(D_00148C2C + 0x1C6C) = v;
    *(char *)(D_00148C2C + 0x10513) = 0;
    func_022498(v);
}
