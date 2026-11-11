/* LEVEL_03:0x1629A8 -- looks up an entry by key, spawns an object and launches it in a random direction. */
typedef struct {
    char pad0[0x24];
    unsigned int key;
    char pad28[0x1C];
} Elem;

typedef struct {
    char pad0[0x34];
    Elem *elems;
    unsigned int count;
} Tab;

typedef struct {
    char pad0[0x58];
    void *link;
} Obj;

extern Tab *D_0021F410;
extern char D_00239178[];
extern float sqrtf(float x);
extern float cosf(float x);
extern int rand(void);
extern Obj *func_07C350(Elem *e, unsigned int key, int arg, int n);
extern void func_1E03B8(Obj *o, void *link, void *p, float *v, int n);

static inline Elem *find(unsigned int key)
{
    Tab *t = D_0021F410;
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        if (t->elems[i].key == key)
            return &t->elems[i];
    }
    return 0;
}

void func_1629A8(int unused, int arg)
{
    Elem *e;
    Obj *o;
    float v[3];
    float c, s, ang, sn;

    e = find(0x4DD77E34);
    if (e == 0)
        o = 0;
    else
        o = func_07C350(e, 0x8B8FBCCB, arg, 0xFF);
    if (o == 0)
        return;
    {
        void *link = o->link;

        v[2] = (float)rand() * 9.3132257e-10f - 1.0f;
        ang = (float)rand() * (3.1415927f / 1073741824.0f) - 3.1415927f;
        c = cosf(ang);
        sn = sqrtf(1.0f - c * c);
        if (ang < 0.0f)
            sn = -sn;
        s = sqrtf(1.0f - v[2] * v[2]);
        v[0] = c * s;
        v[1] = sn * s;
        func_1E03B8(o, link, D_00239178, v, -1);
    }
}
