/* LEVEL_03:0x177E20 -- stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_1282D0(unsigned int id);
extern float D_003B0D38;
extern float D_003B0D3C;
extern int D_003B0D44;

void func_177E20(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_003B0D38 = s;
    D_003B0D3C = c;
    D_003B0D44 = func_1282D0(0xE5BB22E4u);
}
