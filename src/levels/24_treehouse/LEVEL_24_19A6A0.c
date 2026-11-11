/* LEVEL_24:0x19A6A0 -- callback: runs the shared setup on the linked record, then scales the object's three direction vectors by 1.3 and reports success. */
typedef struct V3 {
    float x, y, z;
} V3;

typedef struct Obj {
    V3 a;
    float pad0C;
    V3 b;
    float pad1C;
    V3 c;
    char pad2C[0x58 - 0x2C];
    void *link;
} Obj;

extern char D_001D75A0[];
extern int func_0FC8B8(void *link, char *table, int mode);

static __inline__ void Scale3(V3 *v, float s)
{
    v->x = v->x * s;
    v->y = v->y * s;
    v->z = v->z * s;
}

int func_19A6A0(Obj *o)
{
    func_0FC8B8(o->link, D_001D75A0, 2);
    Scale3(&o->a, 1.2999999523162842f);
    Scale3(&o->b, 1.2999999523162842f);
    Scale3(&o->c, 1.2999999523162842f);
    return 1;
}
