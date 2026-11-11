extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_039E60(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
extern int func_0B6020(int index);

extern int D_001FCAC4;
extern int D_001FCAC8;
extern int D_001FCADC;
extern char D_00235140[];

void func_0BD5B8(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001FCAC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001FCAC8 + D_001FCADC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_039E60(D_00235140, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0B6020(0xb);
    } else {
        func_0B6020(0xc);
    }
}
