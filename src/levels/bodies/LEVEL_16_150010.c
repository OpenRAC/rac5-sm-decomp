/* LEVEL_16:0x150010 -- checks two candidate objects for contact and triggers the first one hit. */
typedef struct Ext { int pad0; int owner; } Ext;
typedef struct Obj {
    char pad0[0x30]; float pos[3];
    char pad1[0x1C]; Ext *ext;
    char pad2[0xA0]; int link;
} Obj;
extern Obj *func_112CE8(int i);
extern int func_0381F0(Obj *o);
extern int func_0383A8(Obj *o);
extern void func_150228(Obj *self, Obj *other);

int func_150010(Obj *self)
{
    unsigned int i;
    Obj *o;
    int owner;
    float *sp;
    float *op;
    float dx, dy, dz;
    sp = self->pos;
    owner = self->ext->owner;
    for (i = 0; i < 2; i++) {
        o = func_112CE8(i);
        if (o != 0 && func_0381F0(o) == 0 && func_0383A8(o) == 0 && o->link != owner) {
            op = o->pos;
            dx = self->pos[0] - o->pos[0];
            dy = sp[1] - op[1];
            dz = sp[2] - op[2];
            if (dx * dx + dy * dy + dz * dz < 2.5600002f) {
                func_150228(self, o);
                return 1;
            }
        }
    }
    return 0;
}
