extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_0361D0(char *string, void *object, int flag);
extern int func_0003A0(int first, unsigned int slot, int third, int fourth);
extern int func_0A50B0(int index);

extern int D_001AAB44;
extern int D_001AAB48;
extern int D_001AAB5C;
extern char D_001E4090[];

void func_0ACA48(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_001AAB44);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001AAB48 + D_001AAB5C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_0361D0(D_001E4090, uVar2, iVar1 == 0);
    iVar3 = func_0003A0(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0A50B0(0xb);
    } else {
        func_0A50B0(0xc);
    }
}
