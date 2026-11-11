/* LEVEL_03:0x0BB2B0 -- the flagged global float, or the fallback one. */
extern unsigned char D_002150A4;
extern float D_002150AC;
extern float D_002150A8;

float func_0BB2B0(void)
{
    float r;

    if (D_002150A4 != 0)
        r = D_002150AC;
    else
        r = D_002150A8;
    return r;
}
