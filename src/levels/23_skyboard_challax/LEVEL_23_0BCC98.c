/* LEVEL_23:0x0BCC98 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001D3F78;
extern int D_001D3F18;
extern int D_001D3F1C;
extern void func_0BBEC0(short *x, short *y, float fx, float fy);
extern int func_027F60(int a);
extern void func_0BC1C8(int *x, int *y);

void func_0BCC98(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0BBEC0(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001D3F78;
    fy = (float)(0x88 - pt[1]) / D_001D3F78;
    if (func_027F60(4) != 0)
        fx = -fx;
    D_001D3F18 += (int)fx;
    D_001D3F1C += (int)fy;
    func_0BC1C8(&D_001D3F18, &D_001D3F1C);
}
