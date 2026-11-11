extern char *func_0A0BB0(int mode);
extern void func_12A4A8(int, void *, void *);
extern void func_12A740(int, int);
extern char D_00201BD8[];
extern char *D_001E2EAC;

void func_0BE110(void)
{
    char *value = func_0A0BB0(0);
    func_12A4A8(0, D_00201BD8, value);
    func_12A740(0, *(int *)(D_001E2EAC + 0x3c) + 1);
}
