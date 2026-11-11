typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001DF6A8;
extern float D_001DF6D0[];
extern float D_00204DF0;
extern float D_00204DF8[];

extern float sqrtf(float);
extern float expf(float);

void func_04FC60(void)
{
    int i;

    D_00204DF0 = sqrtf(D_001DF6A8.x * D_001DF6A8.x
                       + D_001DF6A8.y * D_001DF6A8.y
                       + D_001DF6A8.z * D_001DF6A8.z);
    for (i = 0; i < 5; i++) {
        D_00204DF8[i] = expf(-D_001DF6D0[i]);
    }
}
