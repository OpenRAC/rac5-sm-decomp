extern int func_05D640(void *p);
extern void func_02CDD8(int value, int flag);
extern void func_02CF60(void);

extern char D_1E4090[];
extern int D_1A1AB4;

void func_0ADC10(void)
{
    char *p = D_1E4090;
    signed char c;

    if (func_05D640(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1A1AB4 + 0x1C7E);
    if (c != 0) {
        func_02CDD8(c, 1);
        func_02CF60();
    }
}
