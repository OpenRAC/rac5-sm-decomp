extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_035B18(char *string, void *object, int flag);
extern int func_0003A0(int first, unsigned int slot, int third, int fourth);
extern int func_0A4590(int a);

extern int D_0019E144;
extern int D_0019E148;
extern int D_0019E15C;
extern char D_001D5390[];

void func_0ABF88(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_0019E144);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_0019E148 + D_0019E15C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_035B18(D_001D5390, uVar2, iVar1 == 0);
    iVar3 = func_0003A0(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0A4590(0xb);
    } else {
        func_0A4590(0xc);
    }
}
