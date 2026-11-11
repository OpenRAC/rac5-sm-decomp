/* LEVEL_10:0x0C7270 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_00209B78;
extern int D_00209B18;
extern int D_00209B1C;
extern void func_0C6498(short *x, short *y, float fx, float fy);
extern int func_02A1C8(int a);
extern void func_0C67A0(int *x, int *y);

void func_0C7270(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C6498(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_00209B78;
    fy = (float)(0x88 - pt[1]) / D_00209B78;
    if (func_02A1C8(4) != 0)
        fx = -fx;
    D_00209B18 += (int)fx;
    D_00209B1C += (int)fy;
    func_0C67A0(&D_00209B18, &D_00209B1C);
}
