/* LEVEL_03:0x0C5CE0 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_002191F8;
extern int D_00219198;
extern int D_0021919C;
extern void func_0C4F08(short *x, short *y, float fx, float fy);
extern int func_02A1E8(int a);
extern void func_0C5210(int *x, int *y);

void func_0C5CE0(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C4F08(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_002191F8;
    fy = (float)(0x88 - pt[1]) / D_002191F8;
    if (func_02A1E8(4) != 0)
        fx = -fx;
    D_00219198 += (int)fx;
    D_0021919C += (int)fy;
    func_0C5210(&D_00219198, &D_0021919C);
}
