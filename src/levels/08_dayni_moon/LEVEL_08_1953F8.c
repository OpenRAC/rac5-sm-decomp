/* LEVEL_08:0x1953F8 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_13B5A0(unsigned int id);
extern float D_003E6C78;
extern float D_003E6C7C;
extern int D_003E6C84;

void func_1953F8(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_003E6C78 = s;
    D_003E6C7C = c;
    D_003E6C84 = func_13B5A0(0xE5BB22E4u);
}
