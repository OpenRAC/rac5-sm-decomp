extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_0380A0(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
extern int func_0B5E08(int index);

extern int D_00215144;
extern int D_00215148;
extern int D_0021515C;
extern char D_0024FFC0[];

void func_0BD3A0(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_00215144);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00215148 + D_0021515C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_0380A0(D_0024FFC0, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0B5E08(0xb);
    } else {
        func_0B5E08(0xc);
    }
}
