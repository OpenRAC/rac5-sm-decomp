extern unsigned char D_001ECEE4;
extern char *D_001E332C;
extern unsigned char D_001F5AC9;
extern int func_12EC18(int);
extern void func_026B18(void);

void func_0BE798(void)
{
    if (D_001ECEE4 != 0)
        func_12EC18(*(int *)(D_001E332C + 0x1c6c));
    func_026B18();
    D_001F5AC9 = 0;
}
