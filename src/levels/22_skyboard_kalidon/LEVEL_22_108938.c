/* LEVEL_22:0x108938 -- forwards the caller's pointer and the level object's
   four floats to the level routine. */
typedef struct {
    char pad[0x14];
    float x;
    float y;
    float z;
    float w;
} Obj;

extern Obj *D_165F0C;

extern void func_0733A8(void *p, Obj *o, float v1, int n1, float v2,
                         int n2, float v3, int n3, float v4, int n4,
                         int n5, int n6);

void func_108938(void *a0)
{
    Obj *o = D_165F0C;

    if (o != 0) {
        func_0733A8(a0, o, o->x, 0, o->y, 0, o->z, 0, o->w, 0, 0, 1);
    }
}
