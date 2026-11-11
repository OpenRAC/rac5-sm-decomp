extern char *D_00256534;
extern char D_00254D30[];
extern void func_0277C8(void *, int, int);

void func_090958(char *record)
{
    D_00256534 = record;
    func_0277C8(D_00254D30, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
