/* LEVEL_10:0x0EF988 -- placement copy of LEVEL_01_0F0048.c: spawns a randomised effect record from an object and, when the object has a second slot, a marker record at the same position. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    int pad_00;
    Vec3 pos;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
} Fx;

typedef struct {
    float f_00;
    Vec3 pos;
    void *p_10;
} Mark;

typedef struct {
    float f_00;
    char pad_04[0xC8];
    char f_CC[4];
} Cfg;

typedef struct {
    char pad_00[0x28];
    int id_28;
    Cfg *cfg_2C;
} Obj;

extern Fx *func_0A0CF8(int *ok, Obj *o, int n);
extern Mark *func_097AF0(int *ok, int id, int n);
extern int rand(void);

void func_0EF988(Obj *o, Vec3 *v)
{
    int ok1;
    int ok2;
    Fx *p;
    Mark *m;
    Cfg *c;
    char *q;

    p = func_0A0CF8(&ok1, o, 1);
    if (ok1 != 0) {
        c = o->cfg_2C;
        p->pos = *v;
        p->f_10 = c->f_00;
        p->f_14 = (float)rand() * 4.6566123179658803e-10f;
        p->f_18 = (float)rand() * 4.6566123179658803e-10f;
        p->f_1C = (float)rand() * 4.6566123179658803e-10f;
        if (o->id_28 != -1) {
            q = c->f_CC;
            m = func_097AF0(&ok2, o->id_28, 1);
            if (ok2 != 0) {
                m->f_00 = 1.0f;
                m->pos = *v;
                m->p_10 = q;
            }
        }
    }
}
