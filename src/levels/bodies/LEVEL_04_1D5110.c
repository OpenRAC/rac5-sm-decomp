/* LEVEL_04:0x1D5110 -- tests whether a point lies within range of any listed object. */
typedef struct {
    char pad0[0x30];
    float p[3];
} Obj;
typedef struct {
    Obj *o;
    int pad4;
} Ent;
typedef struct {
    Ent e[8];
    char pad40[4];
    unsigned char n;
} List;
typedef struct {
    char pad0[0x58];
    List *l;
} Own;
extern float func_1D7428(Obj *o);

int func_1D5110(Own *own, Obj *skip, float *pos, float r)
{
    unsigned i;
    List *l;
    Ent *e;
    Obj *o;
    float d;
    float dx, dy, dz;
    float *q;
    float rr;

    l = own->l;
    rr = r;
    for (i = 0; i < l->n; i++) {
        o = l->e[i].o;
        if (o != skip) {
            d = rr + func_1D7428(o);
            q = o->p;
            dx = pos[0] - q[0];
            dy = pos[1] - q[1];
            dz = pos[2] - q[2];
            if (dx * dx + dy * dy + dz * dz <= d * d)
                return 1;
        }
    }
    return 0;
}
