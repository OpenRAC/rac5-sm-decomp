extern int func_069508(void *p);
extern void func_02F3B8(int value, int flag);
extern void func_02F540(void);

extern char D_24FFC0[];
extern int D_20C62C;

void func_0BF410(void)
{
    char *p = D_24FFC0;
    signed char c;

    if (func_069508(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_20C62C + 0x1C7E);
    if (c != 0) {
        func_02F3B8(c, 1);
        func_02F540();
    }
}
