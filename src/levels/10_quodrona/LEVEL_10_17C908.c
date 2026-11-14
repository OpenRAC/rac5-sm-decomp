/* LEVEL_10:0x17C908 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_0039F398;
extern float D_0039F390[2];
extern int func_127EC8(unsigned int value);
extern float cosf(float x);

void func_17C908(void)
{
    float c;

    D_0039F398 = func_127EC8(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_0039F390[1] = __builtin_sqrtf(1.0f - c * c);
    D_0039F390[0] = c;
}
