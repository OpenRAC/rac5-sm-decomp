extern int func_067940(void *p);
extern void func_02D9A8(int value, int flag);
extern void func_02DB30(void);

extern char D_221EC0[];
extern int D_1E2EAC;

void func_0B9F28(void)
{
    char *p = D_221EC0;
    signed char c;

    if (func_067940(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1E2EAC + 0x1C7E);
    if (c != 0) {
        func_02D9A8(c, 1);
        func_02DB30();
    }
}
