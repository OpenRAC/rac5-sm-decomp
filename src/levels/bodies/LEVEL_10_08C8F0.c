typedef struct {
    char pad0[0x10];
    float x;
    float y;
    float z;
    char pad1[0x14];
} Entry;

typedef struct {
    char pad0[0x18];
    unsigned char idx;
} Obj;

extern Obj *D_00248434;
extern Entry D_00246C30[];

void func_08C8F0(float x)
{
    Obj *obj = D_00248434;
    float f;

    if (obj == 0)
        return;
    if (obj->idx == 0xFF)
        return;
    if (obj->idx == 0)
        return;
    f = x * 1.3499999f + 1.0f;
    D_00246C30[obj->idx].x *= f;
    D_00246C30[obj->idx].y *= f;
    D_00246C30[obj->idx].z *= f;
}
