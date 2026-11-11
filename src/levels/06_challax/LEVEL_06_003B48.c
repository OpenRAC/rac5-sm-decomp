typedef struct {
    char pad[0x154];
    float f154;
} Obj;

extern Obj *D_001DE154;

void func_003B48(float v)
{
    D_001DE154->f154 = v;
}
