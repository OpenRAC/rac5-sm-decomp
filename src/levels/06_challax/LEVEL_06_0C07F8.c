/* LEVEL_06:0x0C07F8 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001EFA78;
extern int D_001EFA18;
extern int D_001EFA1C;
extern void func_0BFA20(short *x, short *y, float fx, float fy);
extern int func_0287D8(int a);
extern void func_0BFD28(int *x, int *y);

void func_0C07F8(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0BFA20(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001EFA78;
    fy = (float)(0x88 - pt[1]) / D_001EFA78;
    if (func_0287D8(4) != 0)
        fx = -fx;
    D_001EFA18 += (int)fx;
    D_001EFA1C += (int)fy;
    func_0BFD28(&D_001EFA18, &D_001EFA1C);
}
