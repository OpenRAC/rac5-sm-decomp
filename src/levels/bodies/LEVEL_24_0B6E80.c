extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_032F58(char *string, void *object, int flag);
extern long long func_000418(int first, void *object, int third, int fourth);
extern void func_0AF8B0(int code);

extern int D_001CD744;
extern int D_001CD748;
extern int D_001CD75C;
extern char D_00201040[];

void func_0B6E80(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001CD744);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001CD748 + D_001CD75C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_032F58(D_00201040, uVar2, iVar1 == 0);
    lVar3 = func_000418(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0AF8B0(0xb);
    } else {
        func_0AF8B0(0xc);
    }
}
