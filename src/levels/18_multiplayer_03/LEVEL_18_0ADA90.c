extern int func_05C148(void *p);
extern void func_02C388(int value, int flag);
extern void func_02C510(void);

extern char D_1E4410[];
extern int D_1A2F34;

void func_0ADA90(void)
{
    char *p = D_1E4410;
    signed char c;

    if (func_05C148(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1A2F34 + 0x1C7E);
    if (c != 0) {
        func_02C388(c, 1);
        func_02C510();
    }
}
