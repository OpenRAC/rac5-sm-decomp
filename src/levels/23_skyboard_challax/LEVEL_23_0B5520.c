extern int func_064338(void *p);
extern void func_02CF50(int value, int flag);
extern void func_02D0D8(void);

extern char D_2025C0[];
extern int D_1C73AC;

void func_0B5520(void)
{
    char *p = D_2025C0;
    signed char c;

    if (func_064338(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1C73AC + 0x1C7E);
    if (c != 0) {
        func_02CF50(c, 1);
        func_02D0D8();
    }
}
