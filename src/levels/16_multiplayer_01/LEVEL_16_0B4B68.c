/* LEVEL_16:0x0B4B68 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001AEBF0;
extern int D_001AEB90;
extern int D_001AEB94;
extern void func_0B4630(short *x, short *y, float fx, float fy);
extern int func_027E38(int a);
extern void func_0B4938(int *x, int *y);

void func_0B4B68(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0B4630(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001AEBF0;
    fy = (float)(0x88 - pt[1]) / D_001AEBF0;
    if (func_027E38(4) != 0)
        fx = -fx;
    D_001AEB90 += (int)fx;
    D_001AEB94 += (int)fy;
    func_0B4938(&D_001AEB90, &D_001AEB94);
}
