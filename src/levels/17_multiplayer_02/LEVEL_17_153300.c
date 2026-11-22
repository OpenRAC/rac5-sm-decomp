/* LEVEL_17:0x153300 -- initialises an object: sets its flag, clears the attached block, relocates the first record pointer by the global base and stores the index of the object's type id in the global id table into the block (leaving it cleared when the id is not listed); returns 0 when the pointer is empty. */
extern void *memset(void *p, int c, unsigned long n);

typedef struct {
    char pad00[0x11];
    unsigned char idx;
} Aux;

typedef struct {
    char pad00[0x20];
    int id;
    char pad24[0x34 - 0x24];
} Rec;

typedef struct {
    char pad00[4];
    Rec *recs;
} Cfg;

typedef struct {
    char pad00[0x40];
    Cfg *cfg;
    unsigned char idx44;
    char pad45[0x54 - 0x45];
    int *ptr;
    Aux *aux;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern int D_001A7EA4;
extern int D_001B1250[6];

static __inline__ int Fix(int *p)
{
    if (*p == 0) {
        return 0;
    }
    *p = D_001A7EA4 + *p;
    return 1;
}

int func_153300(Obj *o)
{
    Aux *aux;
    int *p;
    int key;
    unsigned int i;

    o->flags |= 0x20;
    aux = o->aux;
    p = o->ptr;
    memset(aux, 0, 0x14);
    if (Fix(p) == 0) {
        return 0;
    }
    key = o->cfg->recs[o->idx44].id;
    for (i = 0; i < 6; i++) {
        if (key == D_001B1250[i]) {
            aux->idx = i;
            break;
        }
    }
    return 1;
}
