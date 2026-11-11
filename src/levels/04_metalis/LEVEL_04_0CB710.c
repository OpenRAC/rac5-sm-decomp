/* LEVEL_04:0x0CB710 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_0021A038;
extern int D_00219FD8;
extern int D_00219FDC;
extern void func_0CA938(short *x, short *y, float fx, float fy);
extern int func_029E98(int a);
extern void func_0CAC40(int *x, int *y);

void func_0CB710(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0CA938(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_0021A038;
    fy = (float)(0x88 - pt[1]) / D_0021A038;
    if (func_029E98(4) != 0)
        fx = -fx;
    D_00219FD8 += (int)fx;
    D_00219FDC += (int)fy;
    func_0CAC40(&D_00219FD8, &D_00219FDC);
}
