typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_002282A8;
extern float D_002282D0[];
extern float D_00253700;
extern float D_00253708[];

extern float sqrtf(float);
extern float expf(float);

void func_0584E0(void)
{
    int i;

    D_00253700 = sqrtf(D_002282A8.x * D_002282A8.x
                       + D_002282A8.y * D_002282A8.y
                       + D_002282A8.z * D_002282A8.z);
    for (i = 0; i < 5; i++) {
        D_00253708[i] = expf(-D_002282D0[i]);
    }
}
