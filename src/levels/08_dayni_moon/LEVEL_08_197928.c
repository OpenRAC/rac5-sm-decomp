/* LEVEL_08:0x197928 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_003E6D20;
extern float D_003E6D18[2];
extern int func_13B5A0(unsigned int value);
extern float cosf(float x);

void func_197928(void)
{
    float c;

    D_003E6D20 = func_13B5A0(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_003E6D18[1] = __builtin_sqrtf(1.0f - c * c);
    D_003E6D18[0] = c;
}
