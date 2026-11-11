extern void *func_110B00(void);
extern void *func_10F9D0(int id);
extern char *sprintf(char *buffer, const char *format, ...);
extern void func_0C5F20(int a, void *b, void *c, void *d);
extern void func_0C5F58(int a);

extern int D_001AFEE4;
extern char D_0027A088[];

void func_0B81F8(void)
{
    void *uVar1;
    void *uVar2;
    void *uVar3;

    if (D_001AFEE4 != 0) {
        uVar1 = func_110B00();
        sprintf(D_0027A088, func_10F9D0(0x6e6), uVar1);
        uVar1 = func_10F9D0(0x30a);
        uVar2 = func_10F9D0(0x218);
        func_0C5F20(3, D_0027A088, uVar1, uVar2);
        func_0C5F58(10);
    } else {
        uVar1 = func_10F9D0(0x214);
        uVar2 = func_10F9D0(0x30b);
        uVar3 = func_10F9D0(0x218);
        func_0C5F20(3, uVar1, uVar2, uVar3);
    }
}
