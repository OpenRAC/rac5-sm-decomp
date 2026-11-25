extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_039E60(char *string, void *object, int flag);
extern int func_000580(int first, unsigned int slot, int third, int fourth);
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
    int iVar3;

    uVar2 = func_000270(D_001FCAC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001FCAC8 + D_001FCADC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_039E60(D_00235140, uVar2, iVar1 == 0);
    iVar3 = func_000580(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0B6020(0xb);
    } else {
        func_0B6020(0xc);
    }
}
