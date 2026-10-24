/* LEVEL_16:0x0AA518 -- the flagged global float, or the fallback one. */
extern unsigned char D_001AAAA4;
extern float D_001AAAAC;
extern float D_001AAAA8;

float func_0AA518(void)
{
    float r;

    if (D_001AAAA4 != 0)
        r = D_001AAAAC;
    else
        r = D_001AAAA8;
    return r;
}
