/* LEVEL_01:0x0BE780 -- placement copy of LEVEL_01_0BF628.c. */
extern int func_06AB80(void *p);
extern void func_02F5C8(int value, int flag);
extern void func_02F750(void);

extern char D_235140[];
extern int D_1F3FAC;

void func_0BE780(void)
{
    char *p = D_235140;
    signed char c;

    if (func_06AB80(p) != 0) {
        *(unsigned long long *)(p + 0x960) |= 0x4000000000000ULL;
        *(unsigned short *)(*(int *)(p + 0x59C) + 0x74) = 0xFFFF;
    }
    c = *(signed char *)((char *)D_1F3FAC + 0x1C7E);
    if (c != 0) {
        func_02F5C8(c, 1);
        func_02F750();
    }
}
