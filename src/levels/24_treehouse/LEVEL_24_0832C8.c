extern char *D_0020AF34;
extern char D_00209730[];
extern void func_024910(void *, int, int);

void func_0832C8(char *record)
{
    D_0020AF34 = record;
    func_024910(D_00209730, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
