extern int func_0641D0(void *p);
extern void func_02CB08(int value, int flag);
extern void func_02CC90(void);

extern char D_201040[];
extern int D_1C4C2C;

void func_0B8048(void)
{
    char *p = D_201040;
    signed char c;

    if (func_0641D0(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1C4C2C + 0x1C7E);
    if (c != 0) {
        func_02CB08(c, 1);
        func_02CC90();
    }
}
