extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03EF30(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
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
    long long lVar3;

    uVar2 = func_000270(D_00245984);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00245988 + D_0024599C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03EF30(D_002843D0, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0C0F10(0xb);
    } else {
        func_0C0F10(0xc);
    }
}
