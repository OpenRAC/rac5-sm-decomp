extern int D_00209670;
extern char *D_001E2EAC;

void func_026C40(int);

void func_015B28(void)
{
    int v = D_00209670;

    *(int *)(D_001E2EAC + 0x1C6C) = v;
    *(char *)(D_001E2EAC + 0x10513) = 0;
    func_026C40(v);
}
