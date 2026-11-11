/* LEVEL_06:0x167DA8 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_1206C0(unsigned int id);
extern float D_00382B48;
extern float D_00382B4C;
extern int D_00382B54;

void func_167DA8(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_00382B48 = s;
    D_00382B4C = c;
    D_00382B54 = func_1206C0(0xE5BB22E4u);
}
