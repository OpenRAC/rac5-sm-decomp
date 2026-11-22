/* LEVEL_18:0x154B10 -- looks up the tracked target and triggers every kind-2 entry of the object's table whose squared distance to it is below the radius. */
typedef struct {
    float x, y, z;
} Vec3;

typedef struct {
    char pad00[0x30];
    Vec3 pos;
} Target;

typedef struct {
    char pad00[0xC];
    char *table;
    char pad10[0x30 - 0x10];
    int count;
} Obj;

extern int D_0019C320;
extern Target *func_111AA0(int id);
extern void func_1539D0(char *e);

void func_154B10(Obj *o)
{
    char *e;
    char *end;
    Target *t;
    Vec3 *p;
    Vec3 *tp;
    float dx;
    float dy;
    float dz;

    e = o->table;
    end = e + o->count * 0x80;
    t = func_111AA0(D_0019C320);
    if (t != 0) {
        if (e != end) {
            p = (Vec3 *)(e + 0x30);
            do {
                if (*(unsigned char *)((char *)p + 0x15) == 2) {
                    tp = &t->pos;
                    dx = p->x - t->pos.x;
                    dy = p->y - tp->y;
                    dz = p->z - tp->z;
                    if (dx * dx + dy * dy + dz * dz < 900.0f) {
                        func_1539D0(e);
                    }
                }
                e += 0x80;
                p = (Vec3 *)((char *)p + 0x80);
            } while (e != end);
        }
    }
}
