typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_00124868;
extern float D_00124890[];
extern float D_001430D0;
extern float D_001430D8[];

extern float sqrtf(float);
extern float expf(float);

void func_048BB8(void)
{
    int i;

    D_001430D0 = sqrtf(D_00124868.x * D_00124868.x
                       + D_00124868.y * D_00124868.y
                       + D_00124868.z * D_00124868.z);
    for (i = 0; i < 5; i++) {
        D_001430D8[i] = expf(-D_00124890[i]);
    }
}
