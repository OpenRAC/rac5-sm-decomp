typedef struct {
    float x;
    float y;
    float z;
} VEC3;

extern VEC3 D_001C4D68;
extern float D_001C4D90[];
extern float D_001EBB20;
extern float D_001EBB28[];

extern float sqrtf(float);
extern float expf(float);

void func_04E098(void)
{
    int i;

    D_001EBB20 = sqrtf(D_001C4D68.x * D_001C4D68.x
                       + D_001C4D68.y * D_001C4D68.y
                       + D_001C4D68.z * D_001C4D68.z);
    for (i = 0; i < 5; i++) {
        D_001EBB28[i] = expf(-D_001C4D90[i]);
    }
}
