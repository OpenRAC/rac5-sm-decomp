/* LEVEL_09:0x16B9E0 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_123000(unsigned int id);
extern float D_0037D568;
extern float D_0037D56C;
extern int D_0037D574;

void func_16B9E0(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_0037D568 = s;
    D_0037D56C = c;
    D_0037D574 = func_123000(0xE5BB22E4u);
}
