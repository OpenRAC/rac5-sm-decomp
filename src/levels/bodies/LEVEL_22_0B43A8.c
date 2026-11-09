/* LEVEL_22:0x0B43A8 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_0015FEF8;
extern int D_0015FE98;
extern int D_0015FE9C;
extern void func_0B35D0(short *x, short *y, float fx, float fy);
extern int func_024988(int a);
extern void func_0B38D8(int *x, int *y);

void func_0B43A8(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0B35D0(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_0015FEF8;
    fy = (float)(0x88 - pt[1]) / D_0015FEF8;
    if (func_024988(4) != 0)
        fx = -fx;
    D_0015FE98 += (int)fx;
    D_0015FE9C += (int)fy;
    func_0B38D8(&D_0015FE98, &D_0015FE9C);
}
