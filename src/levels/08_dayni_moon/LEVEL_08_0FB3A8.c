/* LEVEL_08:0x0FB3A8 -- placement copy of LEVEL_01_0EF960.c: spawns a randomized particle at a position with a given velocity and, when the owner has a linked slot, a second marker record at the same spot. */

typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    char pad_00[4];
    Vec3 pos;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    Vec3 vel;
    float f_2C;
} Rec;

typedef struct {
    float f_00;
    Vec3 pos;
    char *link;
} Mark;

typedef struct {
    float f_00;
} Params;

typedef struct {
    char pad_00[0x28];
    int link;
    Params *params;
} Obj;

extern Rec *func_0AA518(int *ok, Obj *o, int n);
extern Mark *func_09F6B0(int *ok, int link, int n);
extern int rand(void);

void func_0FB3A8(Obj *o, Vec3 *pos, Vec3 *vel, float f)
{
    int ok;
    int ok2;
    Rec *r;
    Mark *m;
    Params *p;
    char *link;

    r = func_0AA518(&ok, o, 1);
    if (ok == 0) {
        return;
    }
    p = o->params;
    r->pos = *pos;
    r->f_10 = p->f_00;
    r->f_14 = (float)rand() * 4.6566123179658803e-10f;
    r->f_18 = (float)rand() * 4.6566123179658803e-10f;
    r->f_1C = (float)rand() * 4.6566123179658803e-10f;
    r->vel = *vel;
    r->f_2C = f;
    if (o->link != -1) {
        link = (char *)p + 0xD4;
        m = func_09F6B0(&ok2, o->link, 1);
        if (ok2 != 0) {
            m->f_00 = 1.0f;
            m->pos = *pos;
            m->link = link;
        }
    }
}
