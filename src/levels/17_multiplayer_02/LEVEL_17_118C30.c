/* LEVEL_17:0x118C30 -- placement copy of LEVEL_16_1192B8.c: runs setup loop, sets a timestep, and resets a counter when a flag is set or it overflows. */
extern int func_0B8D68(unsigned int value);
extern void func_0B8920(int a);
extern int func_0AABB0(void);
extern void func_112C60(float a);
extern unsigned int func_07A030(int value);
extern int func_0A4590(int a);
extern int func_018598(int a, int b);
extern int D_001ABB10;
extern char D_0018E4A4;

void func_118C30(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        func_0B8D68(i);
        func_0B8920(20);
    }
    if (func_0AABB0()) {
        func_112C60(0.033333335f);
    } else {
        func_112C60(0.0f);
    }
    if ((func_07A030(0x6B10) & 0x4000) || (float)(++D_001ABB10) > 5400.1074f) {
        func_0A4590(1);
        D_0018E4A4 = 0;
        func_018598(20, 1);
    }
}
