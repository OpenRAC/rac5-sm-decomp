typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_002585A8;
extern float D_002585D0[];
extern float D_00288180;
extern float D_00288188[];

extern float sqrtf(float);
extern float expf(float);

void func_05BE38(void)
{
    int i;

    D_00288180 = sqrtf(D_002585A8.x * D_002585A8.x
                       + D_002585A8.y * D_002585A8.y
                       + D_002585A8.z * D_002585A8.z);
    for (i = 0; i < 5; i++) {
        D_00288188[i] = expf(-D_002585D0[i]);
    }
}
