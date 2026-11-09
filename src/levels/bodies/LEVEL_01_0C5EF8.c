/* LEVEL_01:0x0C5EF8 -- moves a scroll position toward a screen-space target offset. */
extern float D_00200B78;
extern int D_00200B18;
extern int D_00200B1C;
extern void func_0C5120(short *x, short *y, float fx, float fy);
extern int func_02A3F0(int a);
extern void func_0C5428(int *x, int *y);

void func_0C5EF8(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C5120(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_00200B78;
    fy = (float)(0x88 - pt[1]) / D_00200B78;
    if (func_02A3F0(4) != 0)
        fx = -fx;
    D_00200B18 += (int)fx;
    D_00200B1C += (int)fy;
    func_0C5428(&D_00200B18, &D_00200B1C);
}
