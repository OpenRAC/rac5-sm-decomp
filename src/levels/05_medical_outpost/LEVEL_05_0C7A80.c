extern void *func_12F070(void);
extern void *func_12DE28(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D54F8(int a, void *b, void *c, void *d);
extern void func_0D5530(int a);

extern int D_001F0064;
extern char D_00317D78[];

void func_0C7A80(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001F0064 != 0) {
        uVar1 = func_12F070();
        sprintf(D_00317D78, func_12DE28(0x6e6), uVar1);
        uVar1 = func_12DE28(0x30a);
        uVar2 = func_12DE28(0x218);
        func_0D54F8(3, D_00317D78, uVar1, uVar2);
        func_0D5530(10);
    } else {
        uVar1 = func_12DE28(0x214);
        uVar2 = func_12DE28(0x30b);
        uVar3 = func_12DE28(0x218);
        func_0D54F8(3, uVar1, uVar2, uVar3);
    }
}
