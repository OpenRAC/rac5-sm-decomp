extern int func_067780(void *p);
extern void func_02E428(int value, int flag);
extern void func_02E5B0(void);

extern char D_21C8C0[];
extern int D_1DDDAC;

void func_0BBA30(void)
{
    char *p = D_21C8C0;
    signed char c;

    if (func_067780(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1DDDAC + 0x1C7E);
    if (c != 0) {
        func_02E428(c, 1);
        func_02E5B0();
    }
}
