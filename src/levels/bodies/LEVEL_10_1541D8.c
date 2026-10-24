/* LEVEL_10:1541D8 -- hands the float of the object at 0x58 of D_0021007C to
   func_1F42D0 and returns its answer. */
extern char *D_0021007C;

float func_1F42D0(float *p, float v);

float func_1541D8(void)
{
    float *p = *(float **)(D_0021007C + 0x58);

    return func_1F42D0(p, *p);
}
