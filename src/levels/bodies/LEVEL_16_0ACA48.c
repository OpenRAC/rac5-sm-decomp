extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_0361D0(char *string, void *object, int flag);
extern long long func_0003A0(int first, void *object, int third, int fourth);
extern void func_0A50B0(int code);

extern int D_001AAB44;
extern int D_001AAB48;
extern int D_001AAB5C;
extern char D_001E4090[];

void func_0ACA48(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001AAB44);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001AAB48 + D_001AAB5C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_0361D0(D_001E4090, uVar2, iVar1 == 0);
    lVar3 = func_0003A0(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0A50B0(0xb);
    } else {
        func_0A50B0(0xc);
    }
}
