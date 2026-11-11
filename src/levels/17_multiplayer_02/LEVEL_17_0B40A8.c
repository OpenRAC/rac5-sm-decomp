/* LEVEL_17:0x0B40A8 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001A21F0;
extern int D_001A2190;
extern int D_001A2194;
extern void func_0B3B70(short *x, short *y, float fx, float fy);
extern int func_0277B8(int a);
extern void func_0B3E78(int *x, int *y);

void func_0B40A8(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0B3B70(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001A21F0;
    fy = (float)(0x88 - pt[1]) / D_001A21F0;
    if (func_0277B8(4) != 0)
        fx = -fx;
    D_001A2190 += (int)fx;
    D_001A2194 += (int)fy;
    func_0B3E78(&D_001A2190, &D_001A2194);
}
