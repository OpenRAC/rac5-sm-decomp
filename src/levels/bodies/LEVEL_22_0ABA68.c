extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_02FDB0(char *string, void *object, int flag);
extern long long func_000418(int first, void *object, int third, int fourth);
extern void func_0A4570(int code);

extern int D_0015BE44;
extern int D_0015BE48;
extern int D_0015BE5C;
extern char D_00186D40[];

void func_0ABA68(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_0015BE44);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_0015BE48 + D_0015BE5C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_02FDB0(D_00186D40, uVar2, iVar1 == 0);
    lVar3 = func_000418(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0A4570(0xb);
    } else {
        func_0A4570(0xc);
    }
}
