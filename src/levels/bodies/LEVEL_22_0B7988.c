extern void *func_10ABC8(void);
extern void *func_109980(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0C5490(int a, void *b, void *c, void *d);
extern void func_0C54C8(int a);

extern int D_00160064;
extern char D_00281A78[];

void func_0B7988(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_00160064 != 0) {
        uVar1 = func_10ABC8();
        sprintf(D_00281A78, func_109980(0x6e6), uVar1);
        uVar1 = func_109980(0x30a);
        uVar2 = func_109980(0x218);
        func_0C5490(3, D_00281A78, uVar1, uVar2);
        func_0C54C8(10);
    } else {
        uVar1 = func_109980(0x214);
        uVar2 = func_109980(0x30b);
        uVar3 = func_109980(0x218);
        func_0C5490(3, uVar1, uVar2, uVar3);
    }
}
