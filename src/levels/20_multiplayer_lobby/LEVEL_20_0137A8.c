extern int D_00131510;
extern char *D_00104194;

void func_022C28(int);

void func_0137A8(void)
{
    int v = D_00131510;

    *(int *)(D_00104194 + 0x1C6C) = v;
    *(char *)(D_00104194 + 0x10513) = 0;
    func_022C28(v);
}
