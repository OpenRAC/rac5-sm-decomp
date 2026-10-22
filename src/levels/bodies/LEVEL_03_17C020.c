/* LEVEL_03:0x17C020 -- forwards the caller's pointer and the level object's
   four floats to the level routine. */
typedef struct {
    char pad[0x14];
    float x;
    float y;
    float z;
    float w;
} Obj;

extern Obj *D_00220370;

extern void func_0807B0(void *p, Obj *o, float v1, int n1, float v2,
                         int n2, float v3, int n3, float v4, int n4,
                         int n5, int n6);

void func_17C020(void *a0)
{
    Obj *o = D_00220370;

    if (o != 0) {
        func_0807B0(a0, o, o->x, 0, o->y, 0, o->z, 0, o->w, 0, 0, 1);
    }
}
