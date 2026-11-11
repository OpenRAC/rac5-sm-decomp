extern int func_05D070(void *p);
extern void func_02C758(int value, int flag);
extern void func_02C8E0(void);

extern char D_1D5390[];
extern int D_1950B4;

void func_0ADFF8(void)
{
    char *p = D_1D5390;
    signed char c;

    if (func_05D070(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1950B4 + 0x1C7E);
    if (c != 0) {
        func_02C758(c, 1);
        func_02C8E0();
    }
}
