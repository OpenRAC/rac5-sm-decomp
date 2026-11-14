/* LEVEL_09:0x16DF10 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_0037D610;
extern float D_0037D608[2];
extern int func_123000(unsigned int value);
extern float cosf(float x);

void func_16DF10(void)
{
    float c;

    D_0037D610 = func_123000(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_0037D608[1] = __builtin_sqrtf(1.0f - c * c);
    D_0037D608[0] = c;
}
