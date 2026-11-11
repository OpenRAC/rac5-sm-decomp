extern char D_00379318[];
extern void func_14A170(void);
extern void func_02D390(void *);
void func_14DB88(void)
{
    D_00379318[0x478] = 0;
    D_00379318[0x494] = 0;
    func_14A170();
    func_02D390(D_00379318 + 0x244);
}