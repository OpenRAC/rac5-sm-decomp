/* LEVEL_19:0x0B4440 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001AFD70;
extern int D_001AFD10;
extern int D_001AFD14;
extern void func_0B3F08(short *x, short *y, float fx, float fy);
extern int func_0279E0(int a);
extern void func_0B4210(int *x, int *y);

void func_0B4440(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0B3F08(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001AFD70;
    fy = (float)(0x88 - pt[1]) / D_001AFD70;
    if (func_0279E0(4) != 0)
        fx = -fx;
    D_001AFD10 += (int)fx;
    D_001AFD14 += (int)fy;
    func_0B4210(&D_001AFD10, &D_001AFD14);
}
