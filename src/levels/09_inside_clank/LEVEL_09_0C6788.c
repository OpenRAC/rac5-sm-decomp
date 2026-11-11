extern void *func_12C690(void);
extern void *func_12B448(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D4200(int a, void *b, void *c, void *d);
extern void func_0D4238(int a);

extern int D_001EAAE4;
extern char D_00313638[];

void func_0C6788(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001EAAE4 != 0) {
        uVar1 = func_12C690();
        sprintf(D_00313638, func_12B448(0x6e6), uVar1);
        uVar1 = func_12B448(0x30a);
        uVar2 = func_12B448(0x218);
        func_0D4200(3, D_00313638, uVar1, uVar2);
        func_0D4238(10);
    } else {
        uVar1 = func_12B448(0x214);
        uVar2 = func_12B448(0x30b);
        uVar3 = func_12B448(0x218);
        func_0D4200(3, uVar1, uVar2, uVar3);
    }
}
