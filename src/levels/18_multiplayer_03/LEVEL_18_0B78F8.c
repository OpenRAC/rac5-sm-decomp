extern void *func_10F110(void);
extern void *func_10DFE0(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0C5620(int a, void *b, void *c, void *d);
extern void func_0C5658(int a);

extern int D_001B01E4;
extern char D_0027A288[];

void func_0B78F8(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001B01E4 != 0) {
        uVar1 = func_10F110();
        sprintf(D_0027A288, func_10DFE0(0x6e6), uVar1);
        uVar1 = func_10DFE0(0x30a);
        uVar2 = func_10DFE0(0x218);
        func_0C5620(3, D_0027A288, uVar1, uVar2);
        func_0C5658(10);
    } else {
        uVar1 = func_10DFE0(0x214);
        uVar2 = func_10DFE0(0x30b);
        uVar3 = func_10DFE0(0x218);
        func_0C5620(3, uVar1, uVar2, uVar3);
    }
}
