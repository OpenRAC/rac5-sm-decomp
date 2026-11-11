extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_034AA0(char *string, void *object, int flag);
extern long long func_0003A0(int first, void *object, int third, int fourth);
extern int func_0A40A8(int a);

extern int D_001ABFC4;
extern int D_001ABFC8;
extern int D_001ABFDC;
extern char D_001E4410[];

void func_0ABA20(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001ABFC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001ABFC8 + D_001ABFDC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_034AA0(D_001E4410, uVar2, iVar1 == 0);
    lVar3 = func_0003A0(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0A40A8(0xb);
    } else {
        func_0A40A8(0xc);
    }
}
