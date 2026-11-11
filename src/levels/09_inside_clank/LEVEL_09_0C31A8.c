/* LEVEL_09:0x0C31A8 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001EA978;
extern int D_001EA918;
extern int D_001EA91C;
extern void func_0C23D0(short *x, short *y, float fx, float fy);
extern int func_029258(int a);
extern void func_0C26D8(int *x, int *y);

void func_0C31A8(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C23D0(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001EA978;
    fy = (float)(0x88 - pt[1]) / D_001EA978;
    if (func_029258(4) != 0)
        fx = -fx;
    D_001EA918 += (int)fx;
    D_001EA91C += (int)fy;
    func_0C26D8(&D_001EA918, &D_001EA91C);
}
