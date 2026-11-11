extern void *func_124E70(void);
extern void *func_123C28(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0CDD80(int a, void *b, void *c, void *d);
extern void func_0CDDB8(int a);

extern int D_001D40E4;
extern char D_002FD2F8[];

void func_0C0278(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001D40E4 != 0) {
        uVar1 = func_124E70();
        sprintf(D_002FD2F8, func_123C28(0x6e6), uVar1);
        uVar1 = func_123C28(0x30a);
        uVar2 = func_123C28(0x218);
        func_0CDD80(3, D_002FD2F8, uVar1, uVar2);
        func_0CDDB8(10);
    } else {
        uVar1 = func_123C28(0x214);
        uVar2 = func_123C28(0x30b);
        uVar3 = func_123C28(0x218);
        func_0CDD80(3, uVar1, uVar2, uVar3);
    }
}
