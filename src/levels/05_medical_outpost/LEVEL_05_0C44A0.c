/* LEVEL_05:0x0C44A0 -- placement copy of LEVEL_01_0C5EF8.c: moves a scroll position toward a screen-space target offset. */
extern float D_001EFEF8;
extern int D_001EFE98;
extern int D_001EFE9C;
extern void func_0C36C8(short *x, short *y, float fx, float fy);
extern int func_029068(int a);
extern void func_0C39D0(int *x, int *y);

void func_0C44A0(short x, short y)
{
    short pt[2];
    float fx, fy;

    pt[0] = x;
    pt[1] = y;
    func_0C36C8(&pt[0], &pt[1], (float)x, (float)y);
    fx = (float)(0xF0 - pt[0]) / D_001EFEF8;
    fy = (float)(0x88 - pt[1]) / D_001EFEF8;
    if (func_029068(4) != 0)
        fx = -fx;
    D_001EFE98 += (int)fx;
    D_001EFE9C += (int)fy;
    func_0C39D0(&D_001EFE98, &D_001EFE9C);
}
