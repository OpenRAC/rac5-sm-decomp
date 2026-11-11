/* LEVEL_02:0x0CC808 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_00215B38;
extern int D_00215AD8;
extern int D_00215ADC;
extern void func_0CBA30(short *x, short *y, float fx, float fy);
extern int func_02ABB8(int a);
extern void func_0CBD38(int *x, int *y);

void func_0CC808(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0CBA30(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_00215B38;
    fy = (float)(0x88 - pt[1]) / D_00215B38;
    if (func_02ABB8(4) != 0)
        fx = -fx;
    D_00215AD8 += (int)fx;
    D_00215ADC += (int)fy;
    func_0CBD38(&D_00215AD8, &D_00215ADC);
}
