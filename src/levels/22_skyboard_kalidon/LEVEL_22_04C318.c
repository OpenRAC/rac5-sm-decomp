typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_0016BDA8;
extern float D_0016BDD0[];
extern float D_0018AAF0;
extern float D_0018AAF8[];

extern float sqrtf(float);
extern float expf(float);

void func_04C318(void)
{
    int i;

    D_0018AAF0 = sqrtf(D_0016BDA8.x * D_0016BDA8.x
                       + D_0016BDA8.y * D_0016BDA8.y
                       + D_0016BDA8.z * D_0016BDA8.z);
    for (i = 0; i < 5; i++) {
        D_0018AAF8[i] = expf(-D_0016BDD0[i]);
    }
}
