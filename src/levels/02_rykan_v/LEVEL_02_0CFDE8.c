extern void *func_139AA8(void);
extern void *func_138860(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0DD8E0(int a, void *b, void *c, void *d);
extern void func_0DD918(int a);

extern int D_00215CA4;
extern char D_003433B8[];

void func_0CFDE8(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00215CA4 != 0) {
        uVar1 = func_139AA8();
        sprintf(D_003433B8, func_138860(0x6e6), uVar1);
        uVar1 = func_138860(0x30a);
        uVar2 = func_138860(0x218);
        func_0DD8E0(3, D_003433B8, uVar1, uVar2);
        func_0DD918(10);
    } else {
        uVar1 = func_138860(0x214);
        uVar2 = func_138860(0x30b);
        uVar3 = func_138860(0x218);
        func_0DD8E0(3, uVar1, uVar2, uVar3);
    }
}
