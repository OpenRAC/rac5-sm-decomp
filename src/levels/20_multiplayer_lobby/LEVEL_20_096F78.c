extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_0305B8(char *string, void *object, int flag);
extern int func_0003A0(int first, unsigned int slot, int third, int fourth);
extern int func_08F6B0(int a);

extern int D_0010D224;
extern int D_0010D228;
extern int D_0010D23C;
extern char D_0013BA10[];

void func_096F78(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_0010D224);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_0010D228 + D_0010D23C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_0305B8(D_0013BA10, uVar2, iVar1 == 0);
    iVar3 = func_0003A0(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_08F6B0(0xb);
    } else {
        func_08F6B0(0xc);
    }
}
