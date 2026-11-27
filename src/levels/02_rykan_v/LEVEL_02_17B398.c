/* LEVEL_02:0x17B398 -- resolves the object's linked record, registers the object in the record's four-slot table when absent, and runs the follow-up; returns whether a record existed. */
typedef struct {
    char pad0[0x40];
    int w40;
    char pad44[0x54 - 0x44];
    int *slots;
} Rec;

typedef struct {
    char pad0[4];
    Rec *link;
} State;

typedef struct {
    char pad0[0x54];
    State *state;
} Obj;

extern char *D_0021BD54;
extern void func_17B550(void *);

static inline int Resolve(State *s)
{
    Rec *r;

    if (s->link == 0)
        return 0;
    r = (Rec *)(D_0021BD54 + (int)s->link);
    if (r->w40 == 0) {
        s->link = 0;
        return 0;
    }
    s->link = r;
    return 1;
}

int func_17B398(Obj *o)
{
    State *s = o->state;
    int *base;
    int *p;
    int *q;
    unsigned int i;
    unsigned int j;

    if (!Resolve(s))
        return 0;
    base = s->link->slots;
    i = 0;
    p = base;
    do {
        i++;
        if (*p == (int)o)
            goto done;
        p++;
    } while (i < 4);
    p = base;
    q = base;
    j = 0;
    do {
        j++;
        if (*p == 0) {
            *q = (int)o;
            break;
        }
        p++;
        q++;
    } while (j < 4);
done:
    ((void (*)(void))func_17B550)();
    return 1;
}
