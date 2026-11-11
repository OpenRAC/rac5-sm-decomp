/* LEVEL_22:0x117D58 -- appends an object to a nearby list when close to a reference point. */
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

extern ObjList D_002E79B0;
extern Obj D_00186D40;
extern void func_073620(Obj *o, void *fn, int a);
extern void func_118700(void);

void func_117D58(Obj *o)
{
    Vec3 *a, *b;
    float dx, dy, dz;
    if (D_002E79B0.count < 128) {
        Obj *r = &D_00186D40;
        a = &o->pos;
        b = &r->pos;
        dx = o->pos.x - r->pos.x;
        dy = a->y - b->y;
        dz = a->z - b->z;
        if (!(36864.0f < dx * dx + dy * dy + dz * dz)) {
            D_002E79B0.list[D_002E79B0.count] = o;
            if (D_002E79B0.count <= 0)
                func_073620(o, (void *)func_118700, 0);
            D_002E79B0.count++;
        }
    }
}
