/* LEVEL_23:0x1410B0 -- placement copy of LEVEL_22_117D58.c: appends an object to a nearby list when close to a reference point. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad0[0x30];
    Vec3 pos;
} Obj;

typedef struct {
    Obj *list[128];
    int count;
} ObjList;

extern ObjList D_00363708;
extern Obj D_002025C0;
extern void func_077FF8(Obj *o, void *fn, int a);
extern void func_141A58(void);

void func_1410B0(Obj *o)
{
    Vec3 *a, *b;
    float dx, dy, dz;
    if (D_00363708.count < 128) {
        Obj *r = &D_002025C0;
        a = &o->pos;
        b = &r->pos;
        dx = o->pos.x - r->pos.x;
        dy = a->y - b->y;
        dz = a->z - b->z;
        if (!(36864.0f < dx * dx + dy * dy + dz * dz)) {
            D_00363708.list[D_00363708.count] = o;
            if (D_00363708.count <= 0)
                func_077FF8(o, (void *)func_141A58, 0);
            D_00363708.count++;
        }
    }
}
