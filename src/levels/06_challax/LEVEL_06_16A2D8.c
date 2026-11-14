/* LEVEL_06:0x16A2D8 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_00382BF0;
extern float D_00382BE8[2];
extern int func_1206C0(unsigned int value);
extern float cosf(float x);

void func_16A2D8(void)
{
    float c;

    D_00382BF0 = func_1206C0(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_00382BE8[1] = __builtin_sqrtf(1.0f - c * c);
    D_00382BE8[0] = c;
}
