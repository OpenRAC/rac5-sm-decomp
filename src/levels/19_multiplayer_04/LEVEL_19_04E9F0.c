typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001C49E8;
extern float D_001C4A10[];
extern float D_001EB920;
extern float D_001EB928[];

extern float sqrtf(float);
extern float expf(float);

void func_04E9F0(void)
{
    int i;

    D_001EB920 = sqrtf(D_001C49E8.x * D_001C49E8.x
                       + D_001C49E8.y * D_001C49E8.y
                       + D_001C49E8.z * D_001C49E8.z);
    for (i = 0; i < 5; i++) {
        D_001EB928[i] = expf(-D_001C4A10[i]);
    }
}
