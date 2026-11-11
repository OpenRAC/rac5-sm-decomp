extern void *func_131578(void);
extern void *func_130310(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D8390(int a, void *b, void *c, void *d);
extern void func_0D83C8(int a);

extern int D_00209CE4;
extern char D_003352B8[];

void func_0CA918(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00209CE4 != 0) {
        uVar1 = func_131578();
        sprintf(D_003352B8, func_130310(0x6e6), uVar1);
        uVar1 = func_130310(0x30a);
        uVar2 = func_130310(0x218);
        func_0D8390(3, D_003352B8, uVar1, uVar2);
        func_0D83C8(10);
    } else {
        uVar1 = func_130310(0x214);
        uVar2 = func_130310(0x30b);
        uVar3 = func_130310(0x218);
        func_0D8390(3, uVar1, uVar2, uVar3);
    }
}
