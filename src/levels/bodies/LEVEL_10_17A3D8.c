/* LEVEL_10:0x17A3D8 -- placement copy of LEVEL_03_177E20.c: stores a cosine and a square root of one minus its square, then records one table value. */
extern float cosf(float x);
extern float sqrtf(float x);
int func_127EC8(unsigned int id);
extern float D_0039F2F0;
extern float D_0039F2F4;
extern int D_0039F2FC;

void func_17A3D8(void)
{
    float c;
    float s;

    c = cosf(0.27925270795822144f);
    s = sqrtf(1.0f - c * c);
    D_0039F2F0 = s;
    D_0039F2F4 = c;
    D_0039F2FC = func_127EC8(0xE5BB22E4u);
}
