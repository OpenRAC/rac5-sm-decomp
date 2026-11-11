extern void *func_10F9D8(void);
extern void *func_10E8A8(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0C5B88(int a, void *b, void *c, void *d);
extern void func_0C5BC0(int a);

extern int D_001A2364;
extern char D_0026B208[];

void func_0B7E60(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001A2364 != 0) {
        uVar1 = func_10F9D8();
        sprintf(D_0026B208, func_10E8A8(0x6e6), uVar1);
        uVar1 = func_10E8A8(0x30a);
        uVar2 = func_10E8A8(0x218);
        func_0C5B88(3, D_0026B208, uVar1, uVar2);
        func_0C5BC0(10);
    } else {
        uVar1 = func_10E8A8(0x214);
        uVar2 = func_10E8A8(0x30b);
        uVar3 = func_10E8A8(0x218);
        func_0C5B88(3, uVar1, uVar2, uVar3);
    }
}
