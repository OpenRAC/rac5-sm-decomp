/* LEVEL_07:0x0BD528 -- the flagged global float, or the fallback one. */
extern unsigned char D_00210D24;
extern float D_00210D2C;
extern float D_00210D28;

float func_0BD528(void)
{
    float r;

    if (D_00210D24 != 0)
        r = D_00210D2C;
    else
        r = D_00210D28;
    return r;
}
