/* LEVEL_03:0x1F0698 -- placement copy of LEVEL_01_1DB8C8.c: lazily loads a set of resource handles. */
extern int func_0DCE68(int a, int b, int c, int d);
extern int func_0DD4B0(int a, int b, int c, int d);

extern int D_00222524;
extern int D_00222528;
extern int D_0022252C;
extern int D_00222530;
extern int D_00222534;
extern int D_00222538;

void func_1F0698(void)
{
    if (D_00222524 == -1) {
        D_00222524 = func_0DCE68(1, 0x8C, 3, 1);
        D_00222528 = func_0DCE68(0, 1, 1, 1);
        D_0022252C = func_0DCE68(1, 0x8D, 3, 1);
        D_00222530 = func_0DCE68(0, 0x8D, 1, 1);
        D_00222538 = func_0DCE68(0, 0x30, 1, 1);
        D_00222534 = func_0DD4B0(0, 0xA, 1, 1);
    }
}
