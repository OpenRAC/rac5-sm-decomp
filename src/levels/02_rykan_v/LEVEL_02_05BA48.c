typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_002238A8;
extern float D_002238D0[];
extern float D_00250400;
extern float D_00250408[];

extern float sqrtf(float);
extern float expf(float);

void func_05BA48(void)
{
    int i;

    D_00250400 = sqrtf(D_002238A8.x * D_002238A8.x
                       + D_002238A8.y * D_002238A8.y
                       + D_002238A8.z * D_002238A8.z);
    for (i = 0; i < 5; i++) {
        D_00250408[i] = expf(-D_002238D0[i]);
    }
}
