extern int func_05BCB8(void *p);
extern void func_028B50(int value, int flag);
extern void func_028CD8(void);

extern char D_17D2C0[];
extern int D_148C2C;

void func_09EDC8(void)
{
    char *p = D_17D2C0;
    signed char c;

    if (func_05BCB8(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_148C2C + 0x1C7E);
    if (c != 0) {
        func_028B50(c, 1);
        func_028CD8();
    }
}
