extern int func_0703C8(void *p);
extern void func_02FD40(int value, int flag);
extern void func_02FEC8(void);

extern char D_2843D0[];
extern int D_23CB2C;

void func_0CA550(void)
{
    char *p = D_2843D0;
    signed char c;

    if (func_0703C8(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_23CB2C + 0x1C7E);
    if (c != 0) {
        func_02FD40(c, 1);
        func_02FEC8();
    }
}
