/* LEVEL_18:0x0B3B40 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001B0070;
extern int D_001B0010;
extern int D_001B0014;
extern void func_0B3608(short *x, short *y, float fx, float fy);
extern int func_0273E8(int a);
extern void func_0B3910(int *x, int *y);

void func_0B3B40(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0B3608(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001B0070;
    fy = (float)(0x88 - pt[1]) / D_001B0070;
    if (func_0273E8(4) != 0)
        fx = -fx;
    D_001B0010 += (int)fx;
    D_001B0014 += (int)fy;
    func_0B3910(&D_001B0010, &D_001B0014);
}
