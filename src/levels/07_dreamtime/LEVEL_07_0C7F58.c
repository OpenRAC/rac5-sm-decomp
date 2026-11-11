/* LEVEL_07:0x0C7F58 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_00214E78;
extern int D_00214E18;
extern int D_00214E1C;
extern void func_0C7180(short *x, short *y, float fx, float fy);
extern int func_02A730(int a);
extern void func_0C7488(int *x, int *y);

void func_0C7F58(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C7180(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_00214E78;
    fy = (float)(0x88 - pt[1]) / D_00214E78;
    if (func_02A730(4) != 0)
        fx = -fx;
    D_00214E18 += (int)fx;
    D_00214E1C += (int)fy;
    func_0C7488(&D_00214E18, &D_00214E1C);
}
