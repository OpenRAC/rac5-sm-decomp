extern int func_0687E8(void *p);
extern void func_02E280(int value, int flag);
extern void func_02E408(void);

extern char D_220E40[];
extern int D_1E332C;

void func_0BCD28(void)
{
    char *p = D_220E40;
    signed char c;

    if (func_0687E8(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1E332C + 0x1C7E);
    if (c != 0) {
        func_02E280(c, 1);
        func_02E408();
    }
}
