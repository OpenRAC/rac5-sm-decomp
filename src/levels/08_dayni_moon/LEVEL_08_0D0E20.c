/* LEVEL_08:0x0D0E20 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_00249A38;
extern int D_002499D8;
extern int D_002499DC;
extern void func_0D0048(short *x, short *y, float fx, float fy);
extern int func_02A968(int a);
extern void func_0D0350(int *x, int *y);

void func_0D0E20(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0D0048(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_00249A38;
    fy = (float)(0x88 - pt[1]) / D_00249A38;
    if (func_02A968(4) != 0)
        fx = -fx;
    D_002499D8 += (int)fx;
    D_002499DC += (int)fy;
    func_0D0350(&D_002499D8, &D_002499DC);
}
