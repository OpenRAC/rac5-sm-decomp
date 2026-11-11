typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001B6C68;
extern float D_001B6C90[];
extern float D_001DCAA0;
extern float D_001DCAA8[];

extern float sqrtf(float);
extern float expf(float);

void func_04EFC0(void)
{
    int i;

    D_001DCAA0 = sqrtf(D_001B6C68.x * D_001B6C68.x
                       + D_001B6C68.y * D_001B6C68.y
                       + D_001B6C68.z * D_001B6C68.z);
    for (i = 0; i < 5; i++) {
        D_001DCAA8[i] = expf(-D_001B6C90[i]);
    }
}
