extern char *D_0022AEF4;
extern char D_002296F0[];
extern void func_025D20(void *, int, int);

void func_087980(char *record)
{
    D_0022AEF4 = record;
    func_025D20(D_002296F0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
