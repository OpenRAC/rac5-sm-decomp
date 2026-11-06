extern int func_056C68(void *p);
extern void func_0298E0(int value, int flag);
extern void func_029A68(void);

extern char D_13BA10[];
extern int D_104194;

void func_098FE8(void)
{
    char *p = D_13BA10;
    signed char c;

    if (func_056C68(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_104194 + 0x1C7E);
    if (c != 0) {
        func_0298E0(c, 1);
        func_029A68();
    }
}
