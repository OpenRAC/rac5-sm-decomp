/* LEVEL_17:0x1816F8 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0CB990(int a, int b, int c, int d);
extern int func_0CBFD8(int a, int b, int c, int d);

extern int D_001B1B8C;
extern int D_001B1B90;
extern int D_001B1B94;
extern int D_001B1B98;
extern int D_001B1B9C;
extern int D_001B1BA0;

void func_1816F8(void)
{
    if (D_001B1B8C == -1) {
        D_001B1B8C = func_0CB990(1, 0x8C, 3, 1);
        D_001B1B90 = func_0CB990(0, 1, 1, 1);
        D_001B1B94 = func_0CB990(1, 0x8D, 3, 1);
        D_001B1B98 = func_0CB990(0, 0x8D, 1, 1);
        D_001B1BA0 = func_0CB990(0, 0x30, 1, 1);
        D_001B1B9C = func_0CBFD8(0, 0xA, 1, 1);
    }
}
