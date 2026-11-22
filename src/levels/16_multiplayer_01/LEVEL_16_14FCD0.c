/* LEVEL_16:0x14FCD0 -- rebases the two offset fields of the object's resource block by the global base; when both are set it either releases both and returns -1 or resets the state record, picks a mode from the class key and starts the handler; returns 1 on success, 0 when an offset was missing. */
typedef struct {
    int w00;
    int w04;
} Res;

typedef struct {
    char pad00[4];
    int mode;
} State;

typedef struct {
    char pad00[0x20];
    unsigned int key;
    char pad24[0x10];
} Cls;

typedef struct {
    char pad00[4];
    Cls *cls;
} Cfg;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char idx;
    char pad45[0xF];
    Res *res;
    State *state;
} Obj;

extern int D_001B48A4;
extern void *memset(void *p, int c, unsigned int n);
extern int func_112E00(void);
extern void func_076328(int a);
extern void func_1502D8(Obj *o, int a, int b);

static __inline__ int Rebase(int *slot)
{
    if (*slot == 0) {
        return 0;
    }
    *slot = D_001B48A4 + *slot;
    return 1;
}

int func_14FCD0(Obj *o)
{
    Res *r;
    State *s;
    unsigned int key;

    r = o->res;
    s = o->state;
    if (!Rebase(&r->w04)) {
        return 0;
    }
    if (!Rebase(&r->w00)) {
        return 0;
    }
    if ((func_112E00() ^ 2) != 0) {
        func_076328(r->w04);
        func_076328(r->w00);
        return -1;
    }
    memset(s, 0, 0x2C);
    key = o->cfg->cls[o->idx].key;
    if (key == 0x6CC61D05) {
        s->mode = 0;
    } else if (key == 0xA8A32700) {
        s->mode = 1;
    }
    func_1502D8(o, 0, 0);
    return 1;
}
