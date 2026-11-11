extern void *func_144C30(void);
extern void *func_1439E8(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0E1F10(int a, void *b, void *c, void *d);
extern void func_0E1F48(int a);

extern int D_00249BA4;
extern char D_0037B138[];

void func_0D4400(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00249BA4 != 0) {
        uVar1 = func_144C30();
        sprintf(D_0037B138, func_1439E8(0x6e6), uVar1);
        uVar1 = func_1439E8(0x30a);
        uVar2 = func_1439E8(0x218);
        func_0E1F10(3, D_0037B138, uVar1, uVar2);
        func_0E1F48(10);
    } else {
        uVar1 = func_1439E8(0x214);
        uVar2 = func_1439E8(0x30b);
        uVar3 = func_1439E8(0x218);
        func_0E1F10(3, uVar1, uVar2, uVar3);
    }
}
