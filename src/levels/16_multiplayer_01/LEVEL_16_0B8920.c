extern void *func_110460(void);
extern void *func_10F330(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0C6648(int a, void *b, void *c, void *d);
extern void func_0C6680(int a);

extern int D_001AED64;
extern char D_00279F08[];

void func_0B8920(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001AED64 != 0) {
        uVar1 = func_110460();
        sprintf(D_00279F08, func_10F330(0x6e6), uVar1);
        uVar1 = func_10F330(0x30a);
        uVar2 = func_10F330(0x218);
        func_0C6648(3, D_00279F08, uVar1, uVar2);
        func_0C6680(10);
    } else {
        uVar1 = func_10F330(0x214);
        uVar2 = func_10F330(0x30b);
        uVar3 = func_10F330(0x218);
        func_0C6648(3, uVar1, uVar2, uVar3);
    }
}
