typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_0020E928;
extern float D_0020E950[];
extern float D_00238EF0;
extern float D_00238EF8[];

extern float sqrtf(float);
extern float expf(float);

void func_056B20(void)
{
    int i;

    D_00238EF0 = sqrtf(D_0020E928.x * D_0020E928.x
                       + D_0020E928.y * D_0020E928.y
                       + D_0020E928.z * D_0020E928.z);
    for (i = 0; i < 5; i++) {
        D_00238EF8[i] = expf(-D_0020E950[i]);
    }
}
