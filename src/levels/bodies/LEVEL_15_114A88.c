/* LEVEL_15:0x114A88 -- spawns a randomized effect entry and a companion marker at a position. */
typedef struct {
    float f[3];
} V12;

typedef struct {
    float f0;
    V12 pos;
    void *link;
} Marker;

typedef struct {
    float f0;
    V12 pos;
    float s10;
    float rnd[3];
} Fx;

typedef struct {
    char pad0[0x28];
    void *owner;
    char *src;
} Obj;

extern Fx *func_080558(int *n, Obj *o, int a);
extern Marker *func_07B5A8(int *n, void *o, int a);
extern int rand(void);

void func_114A88(Obj *o, V12 *pos)
{
    int n0;
    int n1;
    Fx *fx;
    Marker *m;
    char *link;
    char *src;

    fx = func_080558(&n0, o, 1);
    if (n0) {
        src = o->src;
        fx->pos = *pos;
        link = src + 0xF8;
        fx->s10 = *(float *)src;
        fx->rnd[0] = (float)rand() * 4.6566123e-10f;
        fx->rnd[1] = (float)rand() * 4.6566123e-10f;
        fx->rnd[2] = (float)rand() * 4.6566123e-10f;
        m = func_07B5A8(&n1, o->owner, 1);
        if (n1) {
            m->f0 = 1.0f;
            m->pos = *pos;
            m->link = link;
        }
    }
}
