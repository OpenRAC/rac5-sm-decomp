typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_00227828;
extern float D_00227850[];
extern float D_00253D70;
extern float D_00253D78[];

extern float sqrtf(float);
extern float expf(float);

void func_054F90(void)
{
    int i;

    D_00253D70 = sqrtf(D_00227828.x * D_00227828.x
                       + D_00227828.y * D_00227828.y
                       + D_00227828.z * D_00227828.z);
    for (i = 0; i < 5; i++) {
        D_00253D78[i] = expf(-D_00227850[i]);
    }
}
