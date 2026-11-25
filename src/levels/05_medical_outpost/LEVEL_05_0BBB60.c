extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_037B70(char *string, void *object, int flag);
extern int func_000580(int first, unsigned int slot, int third, int fourth);
extern int func_0B45C8(int a);

extern int D_001EBE44;
extern int D_001EBE48;
extern int D_001EBE5C;
extern char D_00220E40[];

void func_0BBB60(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    int iVar3;

    uVar2 = func_000270(D_001EBE44);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_001EBE48 + D_001EBE5C + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_037B70(D_00220E40, uVar2, iVar1 == 0);
    iVar3 = func_000580(iVar4, (unsigned int)uVar2, 0, 1);
    if (iVar3 != 0) {
        func_0B45C8(0xb);
    } else {
        func_0B45C8(0xc);
    }
}
