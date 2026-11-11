extern char *D_002267B4;
extern char D_00224FB0[];
extern void func_025FE8(void *, int, int);

void func_0869E0(char *record)
{
    D_002267B4 = record;
    func_025FE8(D_00224FB0, *(int *)(record + 0xc), *(int *)(record + 4) * 3);
}
