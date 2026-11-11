/* LEVEL_15:0x1033E8 -- sets the object's weight to 1.0 and transforms its position by the shared matrix and the vector held in the linked record. */
typedef struct {
    float x;
    float y;
    float z;
} V3;

struct Obj {
    char pad0[0x50];
    V3 pos;
    float f5C;
    char pad60[0x1DC];
    char *f23C;
};

extern float D_002F3D68[];
extern void func_0EA938(V3 *out, float *m, V3 *v);

void func_1033E8(struct Obj *o)
{
    o->f5C = 1.0f;
    func_0EA938(&o->pos, D_002F3D68, (V3 *)(o->f23C + 0x60));
}
