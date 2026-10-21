typedef struct {
    char pad[0xE4];
    float *pE4;
    float fE8;
} Obj;

void func_1286D8(Obj *a0, float *a1)
{
    a0->pE4 = a1;
    a0->fE8 = 1.0f / *a1;
}
