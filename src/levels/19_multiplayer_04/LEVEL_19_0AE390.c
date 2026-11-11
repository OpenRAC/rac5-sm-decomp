extern int func_05CAA0(void *p);
extern void func_02CB80(int value, int flag);
extern void func_02CD08(void);

extern char D_1E4210[];
extern int D_1A2C34;

void func_0AE390(void)
{
    char *p = D_1E4210;
    signed char c;

    if (func_05CAA0(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1A2C34 + 0x1C7E);
    if (c != 0) {
        func_02CB80(c, 1);
        func_02CD08();
    }
}
