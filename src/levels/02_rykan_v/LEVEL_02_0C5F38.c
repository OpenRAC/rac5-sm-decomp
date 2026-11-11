extern int func_06FC18(void *p);
extern void func_02FD88(int value, int flag);
extern void func_02FF10(void);

extern char D_24C650[];
extern int D_208C2C;

void func_0C5F38(void)
{
    char *p = D_24C650;
    signed char c;

    if (func_06FC18(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_208C2C + 0x1C7E);
    if (c != 0) {
        func_02FD88(c, 1);
        func_02FF10();
    }
}
