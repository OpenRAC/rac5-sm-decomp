extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_035560(char *string, void *object, int flag);
extern long long func_0003A0(int first, void *object, int third, int fourth);
extern void func_0A4928(int code);

extern int D_001ABCC4;
extern int D_001ABCC8;
extern int D_001ABCDC;
extern char D_001E4210[];

void func_0AC320(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001ABCC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001ABCC8 + D_001ABCDC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_035560(D_001E4210, uVar2, iVar1 == 0);
    lVar3 = func_0003A0(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0A4928(0xb);
    } else {
        func_0A4928(0xc);
    }
}
