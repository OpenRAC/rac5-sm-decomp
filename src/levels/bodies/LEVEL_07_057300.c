typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_00223628;
extern float D_00223650[];
extern float D_0024E7F0;
extern float D_0024E7F8[];

extern float sqrtf(float);
extern float expf(float);

void func_057300(void)
{
    int i;

    D_0024E7F0 = sqrtf(D_00223628.x * D_00223628.x
                       + D_00223628.y * D_00223628.y
                       + D_00223628.z * D_00223628.z);
    for (i = 0; i < 5; i++) {
        D_0024E7F8[i] = expf(-D_00223650[i]);
    }
}
