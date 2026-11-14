/* LEVEL_16:0x137E20 -- relocates two offsets of the object's table against a base pointer, then runs a helper. */
typedef struct { char pad00[0x2C]; int w2C; int w30; } Tab;
typedef struct { char pad00[0x54]; Tab *tab; } Obj;
extern int D_001B48A4[1];
extern void func_02D780(Obj *o);

void func_137E20(Obj *o)
{
    Tab *t = (Tab *)o->tab;

    if (t->w2C != 0) {
        t->w2C = D_001B48A4[0] + t->w2C;
    }
    if (t->w30 != 0) {
        int *e = (int *)(D_001B48A4[0] + t->w30);

        if (e[0x10] == 0) {
            t->w30 = 0;
        } else {
            t->w30 = (int)e;
        }
    }
    func_02D780((Obj *)t);
}
