/* FRONTEND:0x003B58 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_0002AD08;
extern unsigned char D_0002AD09;
extern unsigned char *D_00027E9C;

extern void func_0037F8(void);
extern void func_003A50(int a0, int a1);
extern void func_003B10(void);
extern void func_0036F8(void);

void func_003B58(void)
{
    unsigned char *o;
    int i;

    if (D_0002AD08 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_0002AD08 = 1;
    }
    o = D_00027E9C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_0002AD09 != 0) {
            D_0002AD09 = 0;
            func_0037F8();
        }
        func_003A50(1, 1);
        func_003B10();
        func_0036F8();
    } else {
        func_0037F8();
    }
}
