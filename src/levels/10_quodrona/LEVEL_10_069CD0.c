typedef struct {
    char pad[0xF60];
    float v;
} Obj;

extern float D_00216DC8;

float f(Obj *a0)
{
    return a0->v - D_00216DC8;
}
