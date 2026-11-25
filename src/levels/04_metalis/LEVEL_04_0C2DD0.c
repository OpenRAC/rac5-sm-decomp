extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03B4A8(char *string, void *object, int flag);
extern int func_000418(int first, unsigned int slot, int third, int fourth);
extern int func_0BB828(int index);

extern int D_00215F84;
extern int D_00215F88;
extern int D_00215F9C;
extern char D_0024F950[];

void func_0C2DD0(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_00215F84);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00215F88 + D_00215F9C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03B4A8(D_0024F950, uVar2, iVar1 == 0);
    iVar3 = func_000418(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0BB828(0xb);
    } else {
        func_0BB828(0xc);
    }
}
