/* LEVEL_01:0x014810 -- tells whether the two cross products differ with a
   strictly positive sign. */
int func_014810(float *a0, float *a1)
{
    return a0[2] * a1[0] - a0[0] * a1[2] > 0.0f;
}
