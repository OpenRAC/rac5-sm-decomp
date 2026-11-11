/* LEVEL_08:0x21D628 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0E8050(int a, int b, int c, int d);
extern int func_0E8698(int a, int b, int c, int d);

extern int D_0025315C;
extern int D_00253160;
extern int D_00253164;
extern int D_00253168;
extern int D_0025316C;
extern int D_00253170;

void func_21D628(void)
{
    if (D_0025315C == -1) {
        D_0025315C = func_0E8050(1, 0x8C, 3, 1);
        D_00253160 = func_0E8050(0, 1, 1, 1);
        D_00253164 = func_0E8050(1, 0x8D, 3, 1);
        D_00253168 = func_0E8050(0, 0x8D, 1, 1);
        D_00253170 = func_0E8050(0, 0x30, 1, 1);
        D_0025316C = func_0E8698(0, 0xA, 1, 1);
    }
}
