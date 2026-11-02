typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_002178A8;
extern float D_002178D0[];
extern float D_002422F0;
extern float D_002422F8[];

extern float sqrtf(float);
extern float expf(float);

void func_0553D8(void)
{
    int i;

    D_002422F0 = sqrtf(D_002178A8.x * D_002178A8.x
                       + D_002178A8.y * D_002178A8.y
                       + D_002178A8.z * D_002178A8.z);
    for (i = 0; i < 5; i++) {
        D_002422F8[i] = expf(-D_002178D0[i]);
    }
}
