extern int func_06C5E8(void *p);
extern void func_02F268(int value, int flag);
extern void func_02F3F0(void);

extern char D_24F950[];
extern int D_20D12C;

void func_0C4E40(void)
{
    char *p = D_24F950;
    signed char c;

    if (func_06C5E8(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_20D12C + 0x1C7E);
    if (c != 0) {
        func_02F268(c, 1);
        func_02F3F0();
    }
}
