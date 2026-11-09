/* LEVEL_19:0x14CEE8 -- placement copy of LEVEL_16_150010.c: checks two candidate objects for contact and triggers the first one hit. */
typedef struct Ext { int pad0; int owner; } Ext;
typedef struct Obj {
    char pad0[0x30]; float pos[3];
    char pad1[0x1C]; Ext *ext;
    char pad2[0xA0]; int link;
} Obj;
extern Obj *func_113490(int i);
extern int func_037480(Obj *o);
extern int func_037638(Obj *o);
extern void func_14D100(Obj *self, Obj *other);

int func_14CEE8(Obj *self)
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
        o = func_113490(i);
        if (o != 0 && func_037480(o) == 0 && func_037638(o) == 0 && o->link != owner) {
            op = o->pos;
            dx = self->pos[0] - o->pos[0];
            dy = sp[1] - op[1];
            dz = sp[2] - op[2];
            if (dx * dx + dy * dy + dz * dz < 2.5600002f) {
                func_14D100(self, o);
                return 1;
            }
        }
    }
    return 0;
}
