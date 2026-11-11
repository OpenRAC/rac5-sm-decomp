/* LEVEL_19:000480 -- steps the object held by D_001E47E0 and returns the float
   at 0x10 of the answer. */
extern char *D_001E47E0;

char *func_0005B0(char *a0);

float func_000480(void)
{
    return *(float *)(func_0005B0(D_001E47E0) + 0x10);
}
