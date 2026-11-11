extern int D_001C3920;
extern char *D_001950B4;

void func_025A88(int);

void func_015210(void)
{
    int v = D_001C3920;

    *(int *)(D_001950B4 + 0x1C6C) = v;
    *(char *)(D_001950B4 + 0x10513) = 0;
    func_025A88(v);
}
