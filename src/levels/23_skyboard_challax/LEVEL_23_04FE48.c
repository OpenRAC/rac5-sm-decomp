typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001E1AA8;
extern float D_001E1AD0[];
extern float D_00206370;
extern float D_00206378[];

extern float sqrtf(float);
extern float expf(float);

void func_04FE48(void)
{
    int i;

    D_00206370 = sqrtf(D_001E1AA8.x * D_001E1AA8.x
                       + D_001E1AA8.y * D_001E1AA8.y
                       + D_001E1AA8.z * D_001E1AA8.z);
    for (i = 0; i < 5; i++) {
        D_00206378[i] = expf(-D_001E1AD0[i]);
    }
}
