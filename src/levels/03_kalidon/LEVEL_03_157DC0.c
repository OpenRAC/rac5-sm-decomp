/* LEVEL_03:0x157DC0 -- looks up three records by fixed keys into globals and sets the limits of the last one. */
extern int D_0021FB04;
extern int D_0021FB08;
extern int D_0021FB0C;
extern int func_1282D0(unsigned int value);

void func_157DC0(void)
{
    D_0021FB04 = func_1282D0(0xd7d1ff62u);
    D_0021FB08 = func_1282D0(0xc2ea0e22u);
    D_0021FB0C = func_1282D0(0x5adb314bu);
    if (D_0021FB0C != 0) {
        *(float *)(D_0021FB0C + 0x18) = 20.0f;
        *(float *)(D_0021FB0C + 0x1c) = 25.0f;
    }
}
