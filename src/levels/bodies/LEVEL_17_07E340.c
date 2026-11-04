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

extern Obj *D_001E67B4;
extern Entry D_001E4FB0[];

void func_07E340(float x)
{
    Obj *obj = D_001E67B4;
    float f;

    if (obj == 0)
        return;
    if (obj->idx == 0xFF)
        return;
    if (obj->idx == 0)
        return;
    f = x * 1.3499999f + 1.0f;
    D_001E4FB0[obj->idx].x *= f;
    D_001E4FB0[obj->idx].y *= f;
    D_001E4FB0[obj->idx].z *= f;
}
