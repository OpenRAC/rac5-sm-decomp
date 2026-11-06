extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_02E728(char *string, void *object, int flag);
extern long long func_000418(int first, void *object, int third, int fourth);
extern void func_096530(int code);

extern int D_00151744;
extern int D_00151748;
extern int D_0015175C;
extern char D_0017D2C0[];

void func_09DC00(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_00151744);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00151748 + D_0015175C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_02E728(D_0017D2C0, uVar2, iVar1 == 0);
    lVar3 = func_000418(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_096530(0xb);
    } else {
        func_096530(0xc);
    }
}
