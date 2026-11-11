extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_038870(char *string, void *object, int flag);
extern long long func_0003A0(int first, void *object, int third, int fourth);
extern int func_0B71F8(int index);

extern int D_00205AC4;
extern int D_00205AC8;
extern int D_00205ADC;
extern char D_0023E540[];

void func_0BE908(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_00205AC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00205AC8 + D_00205ADC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_038870(D_0023E540, uVar2, iVar1 == 0);
    lVar3 = func_0003A0(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0B71F8(0xb);
    } else {
        func_0B71F8(0xc);
    }
}
