/* LEVEL_24:0x15DEE0 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_11FB68(unsigned int id);
extern float D_0035FED8;
extern float D_0035FEDC;
extern int D_0035FEE4;

void func_15DEE0(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_0035FED8 = s;
    D_0035FEDC = c;
    D_0035FEE4 = func_11FB68(0xE5BB22E4u);
}
