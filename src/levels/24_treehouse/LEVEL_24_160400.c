/* LEVEL_24:0x160400 -- placement copy of LEVEL_03_17A350.c: looks up one record by key and precomputes the cosine and sine of a fixed angle into a global pair. */
extern int D_0035FF80;
extern float D_0035FF78[2];
extern int func_11FB68(unsigned int value);
extern float cosf(float x);

void func_160400(void)
{
    float c;

    D_0035FF80 = func_11FB68(0xa3c1cbdbu);
    c = cosf(0.10471976548433304f);
    D_0035FF78[1] = __builtin_sqrtf(1.0f - c * c);
    D_0035FF78[0] = c;
}
