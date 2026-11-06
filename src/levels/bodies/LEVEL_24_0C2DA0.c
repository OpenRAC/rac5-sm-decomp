extern void *func_1291F8(void);
extern void *func_127FB0(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D08A8(int a, void *b, void *c, void *d);
extern void func_0D08E0(int a);

extern int D_001D1964;
extern char D_002F7D78[];

void func_0C2DA0(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001D1964 != 0) {
        uVar1 = func_1291F8();
        sprintf(D_002F7D78, func_127FB0(0x6e6), uVar1);
        uVar1 = func_127FB0(0x30a);
        uVar2 = func_127FB0(0x218);
        func_0D08A8(3, D_002F7D78, uVar1, uVar2);
        func_0D08E0(10);
    } else {
        uVar1 = func_127FB0(0x214);
        uVar2 = func_127FB0(0x30b);
        uVar3 = func_127FB0(0x218);
        func_0D08A8(3, uVar1, uVar2, uVar3);
    }
}
