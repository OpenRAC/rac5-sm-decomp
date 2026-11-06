extern void *func_131AC0(void);
extern void *func_130878(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D6D38(int a, void *b, void *c, void *d);
extern void func_0D6D70(int a);

extern int D_00219364;
extern char D_00346D38[];

void func_0C92C0(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00219364 != 0) {
        uVar1 = func_131AC0();
        sprintf(D_00346D38, func_130878(0x6e6), uVar1);
        uVar1 = func_130878(0x30a);
        uVar2 = func_130878(0x218);
        func_0D6D38(3, D_00346D38, uVar1, uVar2);
        func_0D6D70(10);
    } else {
        uVar1 = func_130878(0x214);
        uVar2 = func_130878(0x30b);
        uVar3 = func_130878(0x218);
        func_0D6D38(3, uVar1, uVar2, uVar3);
    }
}
