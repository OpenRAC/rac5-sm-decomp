/* LEVEL_24:0x0BF7C0 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001D17F8;
extern int D_001D1798;
extern int D_001D179C;
extern void func_0BE9E8(short *x, short *y, float fx, float fy);
extern int func_027930(int a);
extern void func_0BECF0(int *x, int *y);

void func_0BF7C0(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0BE9E8(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001D17F8;
    fy = (float)(0x88 - pt[1]) / D_001D17F8;
    if (func_027930(4) != 0)
        fx = -fx;
    D_001D1798 += (int)fx;
    D_001D179C += (int)fy;
    func_0BECF0(&D_001D1798, &D_001D179C);
}
