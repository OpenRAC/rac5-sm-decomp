extern void *func_129DC8(void);
extern void *func_128B80(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0D1850(int a, void *b, void *c, void *d);
extern void func_0D1888(int a);

extern int D_001EFBE4;
extern char D_00318C38[];

void func_0C3DD8(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001EFBE4 != 0) {
        uVar1 = func_129DC8();
        sprintf(D_00318C38, func_128B80(0x6e6), uVar1);
        uVar1 = func_128B80(0x30a);
        uVar2 = func_128B80(0x218);
        func_0D1850(3, D_00318C38, uVar1, uVar2);
        func_0D1888(10);
    } else {
        uVar1 = func_128B80(0x214);
        uVar2 = func_128B80(0x30b);
        uVar3 = func_128B80(0x218);
        func_0D1850(3, uVar1, uVar2, uVar3);
    }
}
