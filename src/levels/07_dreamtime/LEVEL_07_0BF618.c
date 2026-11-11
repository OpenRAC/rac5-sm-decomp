extern void *func_000270(int value);
extern int func_0002D8(void *object);
extern void func_03A390(char *string, void *object, int flag);
extern long long func_000580(int first, void *object, int third, int fourth);
extern int func_0B8080(int a);

extern int D_00210DC4;
extern int D_00210DC8;
extern int D_00210DDC;
extern char D_0024AA40[];

void func_0BF618(void)
{
    void *uVar2;
    int iVar1;
    int iVar4;
    long long lVar3;

    uVar2 = func_000270(D_00210DC4);
    iVar1 = func_0002D8(uVar2);
    iVar4 = D_00210DC8 + D_00210DDC + 1;
    if (iVar1 == iVar4) {
        iVar4 = 0;
    }
    func_03A390(D_0024AA40, uVar2, iVar1 == 0);
    lVar3 = func_000580(iVar4, uVar2, 0, 1);
    if (lVar3 != 0) {
        func_0B8080(0xb);
    } else {
        func_0B8080(0xc);
    }
}
