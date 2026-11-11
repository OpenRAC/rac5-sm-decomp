/* LEVEL_20:0x0EB660 -- placement copy of LEVEL_16_1192B8.c: runs setup loop, sets a timestep, and resets a counter when a flag is set or it overflows. */
extern int func_0A3D58(unsigned int value);
extern void func_0A3910(int a);
extern int func_095BA0(void);
extern void func_0E6040(float a);
extern unsigned int func_067228(int value);
extern int func_08F6B0(int a);
extern int func_0169D0(int a, int b);
extern int D_0011ABB8;
extern char D_000FD58C;

void func_0EB660(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        func_0A3D58(i);
        func_0A3910(20);
    }
    if (func_095BA0()) {
        func_0E6040(0.033333335f);
    } else {
        func_0E6040(0.0f);
    }
    if ((func_067228(0x6B10) & 0x4000) || (float)(++D_0011ABB8) > 5400.1074f) {
        func_08F6B0(1);
        D_000FD58C = 0;
        func_0169D0(20, 1);
    }
}
