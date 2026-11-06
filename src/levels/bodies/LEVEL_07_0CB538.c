extern void *func_1366F8(void);
extern void *func_1354B0(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D8FB0(int a, void *b, void *c, void *d);
extern void func_0D8FE8(int a);

extern int D_00214FE4;
extern char D_003417B8[];

void func_0CB538(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00214FE4 != 0) {
        uVar1 = func_1366F8();
        sprintf(D_003417B8, func_1354B0(0x6e6), uVar1);
        uVar1 = func_1354B0(0x30a);
        uVar2 = func_1354B0(0x218);
        func_0D8FB0(3, D_003417B8, uVar1, uVar2);
        func_0D8FE8(10);
    } else {
        uVar1 = func_1354B0(0x214);
        uVar2 = func_1354B0(0x30b);
        uVar3 = func_1354B0(0x218);
        func_0D8FB0(3, uVar1, uVar2, uVar3);
    }
}
