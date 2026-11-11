extern int D_00177C70;
extern char *D_0015332C;

void func_022E78(int);

void func_013FC8(void)
{
    int v = D_00177C70;

    *(int *)(D_0015332C + 0x1C6C) = v;
    *(char *)(D_0015332C + 0x10513) = 0;
    func_022E78(v);
}
