/* LEVEL_07:0x187340 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_003AB8B0;
extern float D_003AB8A8[2];
extern int func_12D068(unsigned int value);
extern float cosf(float x);

void func_187340(void)
{
    float c;

    D_003AB8B0 = func_12D068(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_003AB8A8[1] = __builtin_sqrtf(1.0f - c * c);
    D_003AB8A8[0] = c;
}
