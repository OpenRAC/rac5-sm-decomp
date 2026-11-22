/* LEVEL_06:0x181EB8 -- for objects in states 1-4 copies the target's position and extent into the global camera record. */
typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0x1C4];
    float ext[3];
    char pad20C[0xD0];
    float f_2DC;
    float f_2E0;
    int w_2E4;
} Cam;

typedef struct {
    float v[3];
    char pad0C[4];
    float w[3];
} Box;

typedef struct {
    int pad00;
    Box *box;
} Tgt;

typedef struct {
    char pad00[0x30];
    Tgt *tgt;
} Link;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Link *link;
} Obj;

extern Cam D_00221EC0;
extern int func_0A0808(int a);
extern void func_038640(int a);
extern void func_038698(int a);
extern void func_0385E8(int a);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Sub3(float *d, float *a, float *b)
{
    d[0] = a[0] - b[0];
    d[1] = a[1] - b[1];
    d[2] = a[2] - b[2];
}

void func_181EB8(Obj *o)
{
    Tgt *t;
    Cam *c;
    float y;

    if ((unsigned)(o->state - 1) < 4) {
        if (o->state == 1 && func_0A0808(0) == 0) {
            return;
        }
        t = o->link->tgt;
        c = &D_00221EC0;
        Copy3(c->pos, t->box->v);
        Sub3(c->ext, t->box->w, t->box->v);
        y = t->box->v[1];
        c->w_2E4 = 0;
        c->f_2E0 = y;
        c->f_2DC = y;
        func_038640(0);
        func_038698(0);
        func_0385E8(0);
    }
}
