typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001C37E8;
extern float D_001C3810[];
extern float D_001EB7A0;
extern float D_001EB7A8[];

extern float sqrtf(float);
extern float expf(float);

void func_04F590(void)
{
    int i;

    D_001EB7A0 = sqrtf(D_001C37E8.x * D_001C37E8.x
                       + D_001C37E8.y * D_001C37E8.y
                       + D_001C37E8.z * D_001C37E8.z);
    for (i = 0; i < 5; i++) {
        D_001EB7A8[i] = expf(-D_001C3810[i]);
    }
}
