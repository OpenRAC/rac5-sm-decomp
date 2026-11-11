typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001FD7A8;
extern float D_001FD7D0[];
extern float D_00225C70;
extern float D_00225C78[];

extern float sqrtf(float);
extern float expf(float);

void func_0533D0(void)
{
    int i;

    D_00225C70 = sqrtf(D_001FD7A8.x * D_001FD7A8.x
                       + D_001FD7A8.y * D_001FD7A8.y
                       + D_001FD7A8.z * D_001FD7A8.z);
    for (i = 0; i < 5; i++) {
        D_00225C78[i] = expf(-D_001FD7D0[i]);
    }
}
