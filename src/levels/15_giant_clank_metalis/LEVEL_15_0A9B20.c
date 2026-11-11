extern void *func_0F25C0(void);
extern void *func_0F1378(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0B7590(int a, void *b, void *c, void *d);
extern void func_0B75C8(int a);

extern int D_00155964;
extern char D_002436F8[];

void func_0A9B20(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00155964 != 0) {
        uVar1 = func_0F25C0();
        sprintf(D_002436F8, func_0F1378(0x6e6), uVar1);
        uVar1 = func_0F1378(0x30a);
        uVar2 = func_0F1378(0x218);
        func_0B7590(3, D_002436F8, uVar1, uVar2);
        func_0B75C8(10);
    } else {
        uVar1 = func_0F1378(0x214);
        uVar2 = func_0F1378(0x30b);
        uVar3 = func_0F1378(0x218);
        func_0B7590(3, uVar1, uVar2, uVar3);
    }
}
