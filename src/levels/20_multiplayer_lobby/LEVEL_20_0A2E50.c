extern void *func_0E3248(void);
extern void *func_0E2118(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0B0B78(int a, void *b, void *c, void *d);
extern void func_0B0BB0(int a);

extern int D_00111444;
extern char D_0019D748[];

void func_0A2E50(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00111444 != 0) {
        uVar1 = func_0E3248();
        sprintf(D_0019D748, func_0E2118(0x6e6), uVar1);
        uVar1 = func_0E2118(0x30a);
        uVar2 = func_0E2118(0x218);
        func_0B0B78(3, D_0019D748, uVar1, uVar2);
        func_0B0BB0(10);
    } else {
        uVar1 = func_0E2118(0x214);
        uVar2 = func_0E2118(0x30b);
        uVar3 = func_0E2118(0x218);
        func_0B0B78(3, uVar1, uVar2, uVar3);
    }
}
