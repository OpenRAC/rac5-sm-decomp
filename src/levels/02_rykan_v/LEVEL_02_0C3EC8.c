extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03E908(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
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
    long long lVar3;

    uVar2 = func_000270(D_00211A84);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00211A88 + D_00211A9C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03E908(D_0024C650, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0BC930(0xb);
    } else {
        func_0BC930(0xc);
    }
}
