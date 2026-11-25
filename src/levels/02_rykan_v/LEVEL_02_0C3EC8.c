extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03E908(char *string, void *object, int flag);
extern int func_000580(int first, unsigned int slot, int third, int fourth);
extern int func_0BC930(int index);

extern int D_00211A84;
extern int D_00211A88;
extern int D_00211A9C;
extern char D_0024C650[];

void func_0C3EC8(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_00211A84);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00211A88 + D_00211A9C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03E908(D_0024C650, uVar2, iVar1 == 0);
    iVar3 = func_000580(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0BC930(0xb);
    } else {
        func_0BC930(0xc);
    }
}
