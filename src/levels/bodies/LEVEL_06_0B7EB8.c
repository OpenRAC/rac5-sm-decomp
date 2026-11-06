extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_0368B0(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
extern void func_0B0848(int code);

extern int D_001EB9C4;
extern int D_001EB9C8;
extern int D_001EB9DC;
extern char D_00221EC0[];

void func_0B7EB8(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_001EB9C4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001EB9C8 + D_001EB9DC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_0368B0(D_00221EC0, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0B0848(0xb);
    } else {
        func_0B0848(0xc);
    }
}
