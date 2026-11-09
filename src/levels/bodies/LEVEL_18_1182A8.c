/* LEVEL_18:0x1182A8 -- placement copy of LEVEL_16_1192B8.c: runs setup loop, sets a timestep, and resets a counter when a flag is set or it overflows. */
extern int func_0B8800(unsigned int value);
extern void func_0B83B8(int a);
extern int func_0AA648(void);
extern void func_112288(float a);
extern unsigned int func_078F38(long long value);
extern int func_0A40A8(int a);
extern void func_018260(int a, int b);
extern int D_001B9998;
extern char D_0019C324;

void func_1182A8(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        func_0B8800(i);
        func_0B83B8(20);
    }
    if (func_0AA648()) {
        func_112288(0.033333335f);
    } else {
        func_112288(0.0f);
    }
    if ((func_078F38(0x6B10) & 0x4000) || (float)(++D_001B9998) > 5400.1074f) {
        func_0A40A8(1);
        D_0019C324 = 0;
        func_018260(20, 1);
    }
}
