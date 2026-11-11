/* LEVEL_07:0x184E10 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_12D068(unsigned int id);
extern float D_003AB808;
extern float D_003AB80C;
extern int D_003AB814;

void func_184E10(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_003AB808 = s;
    D_003AB80C = c;
    D_003AB814 = func_12D068(0xE5BB22E4u);
}
