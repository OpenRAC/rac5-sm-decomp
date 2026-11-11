typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001FD828;
extern float D_001FD850[];
extern float D_00224BF0;
extern float D_00224BF8[];

extern float sqrtf(float);
extern float expf(float);

void func_0546F8(void)
{
    int i;

    D_00224BF0 = sqrtf(D_001FD828.x * D_001FD828.x
                       + D_001FD828.y * D_001FD828.y
                       + D_001FD828.z * D_001FD828.z);
    for (i = 0; i < 5; i++) {
        D_00224BF8[i] = expf(-D_001FD850[i]);
    }
}
