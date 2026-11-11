extern int func_06B888(void *p);
extern void func_02F900(int value, int flag);
extern void func_02FA88(void);

extern char D_24AA40[];
extern int D_2082AC;

void func_0C1688(void)
{
    char *p = D_24AA40;
    signed char c;

    if (func_06B888(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_2082AC + 0x1C7E);
    if (c != 0) {
        func_02F900(c, 1);
        func_02FA88();
    }
}
