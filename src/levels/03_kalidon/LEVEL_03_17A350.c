/* LEVEL_03:0x17A350 -- looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_003B0DE0;
extern float D_003B0DD8[2];
extern int func_1282D0(unsigned int value);
extern float cosf(float x);

void func_17A350(void)
{
    float c;

    D_003B0DE0 = func_1282D0(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_003B0DD8[1] = __builtin_sqrtf(1.0f - c * c);
    D_003B0DD8[0] = c;
}
