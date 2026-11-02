typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001F8528;
extern float D_001F8550[];
extern float D_00220670;
extern float D_00220678[];

extern float sqrtf(float);
extern float expf(float);

void func_053210(void)
{
    int i;

    D_00220670 = sqrtf(D_001F8528.x * D_001F8528.x
                       + D_001F8528.y * D_001F8528.y
                       + D_001F8528.z * D_001F8528.z);
    for (i = 0; i < 5; i++) {
        D_00220678[i] = expf(-D_001F8550[i]);
    }
}
