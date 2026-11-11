extern void *func_13FB78(void);
extern void *func_13E930(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0DC800(int a, void *b, void *c, void *d);
extern void func_0DC838(int a);

extern int D_0021A1A4;
extern char D_003466B8[];

void func_0CECF0(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_0021A1A4 != 0) {
        uVar1 = func_13FB78();
        sprintf(D_003466B8, func_13E930(0x6e6), uVar1);
        uVar1 = func_13E930(0x30a);
        uVar2 = func_13E930(0x218);
        func_0DC800(3, D_003466B8, uVar1, uVar2);
        func_0DC838(10);
    } else {
        uVar1 = func_13E930(0x214);
        uVar2 = func_13E930(0x30b);
        uVar3 = func_13E930(0x218);
        func_0DC800(3, uVar1, uVar2, uVar3);
    }
}
