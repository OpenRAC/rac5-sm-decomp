/* LEVEL_15:0x114BE0 -- spawns a particle record with a random spin and a matching marker record. */

typedef struct Vec114BE0 {
    float x;
    float y;
    float z;
} Vec114BE0;

typedef struct Anchor114BE0 {
    float f_00;
    char pad_04[0xF4];
    int w_F8;
} Anchor114BE0;

typedef struct Obj114BE0 {
    char pad_00[0x28];
    int w_28;
    Anchor114BE0 *p_2C;
} Obj114BE0;

typedef struct Part114BE0 {
    char pad_00[4];
    Vec114BE0 pos;
    float f_10;
    float f_14;
    float f_18;
    float f_1C;
    Vec114BE0 vel;
    float f_2C;
} Part114BE0;

typedef struct Mark114BE0 {
    float f_00;
    Vec114BE0 pos;
    int *p_10;
} Mark114BE0;

extern int rand(void);
Part114BE0 *func_080558(int *ok, Obj114BE0 *o, int n);
Mark114BE0 *func_07B5A8(int *ok, int w, int n);

void func_114BE0(Obj114BE0 *o, Vec114BE0 *a, Vec114BE0 *b, float f)
{
    int ok1;
    int ok2;
    Part114BE0 *e;
    Mark114BE0 *m;
    Anchor114BE0 *p;
    int *q;

    e = func_080558(&ok1, o, 1);
    if (ok1 == 0) {
        return;
    }
    p = o->p_2C;
    q = &p->w_F8;
    e->pos = *a;
    e->f_10 = p->f_00;
    e->f_14 = (float)rand() * 4.6566123e-10f;
    e->f_18 = (float)rand() * 4.6566123e-10f;
    e->f_1C = (float)rand() * 4.6566123e-10f;
    e->vel = *b;
    e->f_2C = f;
    m = func_07B5A8(&ok2, o->w_28, 1);
    if (ok2 != 0) {
        m->f_00 = 1.0f;
        m->pos = *a;
        m->p_10 = q;
    }
}
