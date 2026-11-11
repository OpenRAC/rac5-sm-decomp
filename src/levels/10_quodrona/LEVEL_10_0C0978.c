extern int func_0699B0(void *p);
extern void func_02F450(int value, int flag);
extern void func_02F5D8(void);

extern char D_23E540[];
extern int D_1FCFAC;

void func_0C0978(void)
{
    char *p = D_23E540;
    signed char c;

    if (func_0699B0(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1FCFAC + 0x1C7E);
    if (c != 0) {
        func_02F450(c, 1);
        func_02F5D8();
    }
}
