extern char *D_002104B4;
extern char D_0020ECB0[];
extern void func_024D38(void *, int, int);

void func_07FEE8(char *record)
{
    D_002104B4 = record;
    func_024D38(D_0020ECB0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
