extern int D_0022F4F0;
extern char *D_002082AC;

void func_028B68(int);

void func_0179E8(void)
{
    int v = D_0022F4F0;

    *(int *)(D_002082AC + 0x1C6C) = v;
    *(char *)(D_002082AC + 0x10513) = 0;
    func_028B68(v);
}
