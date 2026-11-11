/* LEVEL_04:0x024030 -- placement copy of LEVEL_01_0243B0.c: one-time startup latch, then runs display helpers. */

extern unsigned char D_0020CFF0;
extern unsigned char D_0020CFF1;
extern unsigned char *D_0020D12C;

extern void func_027DC8(void);
extern void func_023F28(int a0, int a1);
extern void func_023FE8(void);
extern void func_027CC8(void);

void func_024030(void)
{
    unsigned char *o;
    int i;

    if (D_0020CFF0 == 0) {
        i = 0;
        do {
            i++;
        } while (i != 0x19);
        D_0020CFF0 = 1;
    }
    o = D_0020D12C;
    if ((o[4] ^ 1) & 1) {
        *(unsigned int *)(o + 4) = *(unsigned int *)(o + 4) | 1;
        if (D_0020CFF1 != 0) {
            D_0020CFF1 = 0;
            func_027DC8();
        }
        func_023F28(1, 1);
        func_023FE8();
        func_027CC8();
    } else {
        func_027DC8();
    }
}
