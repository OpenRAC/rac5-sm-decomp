/* LEVEL_20:0x09F098 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001112D0;
extern int D_00111270;
extern int D_00111274;
extern void func_09EB60(short *x, short *y, float fx, float fy);
extern int func_024940(int a);
extern void func_09EE68(int *x, int *y);

void func_09F098(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_09EB60(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001112D0;
    fy = (float)(0x88 - pt[1]) / D_001112D0;
    if (func_024940(4) != 0)
        fx = -fx;
    D_00111270 += (int)fx;
    D_00111274 += (int)fy;
    func_09EE68(&D_00111270, &D_00111274);
}
