extern int D_002043F0;
extern char *D_001DDDAC;

void func_027698(int);

void func_0166E8(void)
{
    int v = D_002043F0;

    *(int *)(D_001DDDAC + 0x1C6C) = v;
    *(char *)(D_001DDDAC + 0x10513) = 0;
    func_027698(v);
}
