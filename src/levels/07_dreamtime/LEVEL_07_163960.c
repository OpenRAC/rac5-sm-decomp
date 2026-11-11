/* LEVEL_07:0x163960 -- placement copy of LEVEL_06_1564C0.c: relocates the offset fields of the record behind the object's pointer by the global base (the pointer fields are dropped when their target is invalid), registers the last one through func_178540 when it is valid, clears the byte flag of the attached block and returns 1. */
extern int D_0021B094;

typedef struct {
    char pad00[4];
    int w4;
    int w8;
    int wC;
    char pad10[0x20 - 0x10];
    int w20;
} Rec;

typedef struct {
    char pad00[0x1C];
    char b1C;
} Aux;

typedef struct {
    char pad00[0x54];
    Rec *rec;
    Aux *aux;
} Owner;

extern void func_178540(char *object, char *member, int value);
extern void func_164590(void);

static __inline__ int FixChecked(int *p)
{
    int t;

    if (*p == 0) {
        return 0;
    }
    t = D_0021B094 + *p;
    if (*(int *)(t + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = t;
    return 1;
}

int func_163960(Owner *o)
{
    Rec *r;
    Aux *aux;
    int t;

    r = o->rec;
    aux = o->aux;
    if (r->w4 != 0) {
        r->w4 = D_0021B094 + r->w4;
    }
    if (r->w8 != 0) {
        r->w8 = D_0021B094 + r->w8;
    }
    if (r->wC != 0) {
        t = D_0021B094 + r->wC;
        if (*(int *)(t + 0x40) == 0) {
            r->wC = 0;
        } else {
            r->wC = t;
        }
    }
    if (FixChecked(&r->w20) != 0) {
        func_178540((char *)r->w20, (char *)o, (int)func_164590);
    }
    aux->b1C = 0;
    return 1;
}
