/* LEVEL_15:0x0A6540 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001557F8;
extern int D_00155798;
extern int D_0015579C;
extern void func_0A5768(short *x, short *y, float fx, float fy);
extern int func_023BC8(int a);
extern void func_0A5A70(int *x, int *y);

void func_0A6540(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0A5768(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001557F8;
    fy = (float)(0x88 - pt[1]) / D_001557F8;
    if (func_023BC8(4) != 0)
        fx = -fx;
    D_00155798 += (int)fx;
    D_0015579C += (int)fy;
    func_0A5A70(&D_00155798, &D_0015579C);
}
