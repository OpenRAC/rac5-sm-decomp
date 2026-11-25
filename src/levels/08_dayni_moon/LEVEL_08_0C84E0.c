extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03EF30(char *string, void *object, int flag);
extern int func_000580(int first, unsigned int slot, int third, int fourth);
extern int func_0C0F10(int a);

extern int D_00245984;
extern int D_00245988;
extern int D_0024599C;
extern char D_002843D0[];

void func_0C84E0(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_00245984);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00245988 + D_0024599C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03EF30(D_002843D0, uVar2, iVar1 == 0);
    iVar3 = func_000580(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0C0F10(0xb);
    } else {
        func_0C0F10(0xc);
    }
}
