extern int func_060788(void *p);
extern void func_029970(int value, int flag);
extern void func_029AF8(void);

extern char D_186D40[];
extern int D_15332C;

void func_0ACC30(void)
{
    char *p = D_186D40;
    signed char c;

    if (func_060788(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_15332C + 0x1C7E);
    if (c != 0) {
        func_029970(c, 1);
        func_029AF8();
    }
}
