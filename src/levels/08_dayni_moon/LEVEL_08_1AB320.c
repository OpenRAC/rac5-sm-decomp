/* LEVEL_08:0x1AB320 -- finishes loading a prop: validates and relocates its resource handles in order and, when everything resolved, plays the confirmation sound (marking the first resource's state byte and calling the follow-up) or reports the load as complete; returns 1 on success, -1 when it started the sound, 0 on failure. */
typedef struct Ptrs {
    int p0;
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
} Ptrs;

typedef struct First {
    char pad00[0x54];
    struct Sub *sub;
} First;

typedef struct Sub {
    char pad00[0xC];
    unsigned char b0C;
} Sub;

typedef struct Obj {
    char pad00[0x54];
    Ptrs *ptrs;
} Obj;

extern int D_0024FC54;

extern int func_027A30(int a, int b);
extern void func_1F8A18(Obj *o);

static __inline__ int Reloc(int *p)
{
    if (*p == 0)
        return 0;
    *p = D_0024FC54 + *p;
    return 1;
}

static __inline__ int Resolve(int *p)
{
    int x;

    if (*p == 0)
        return 0;
    x = D_0024FC54 + *p;
    if (*(int *)(x + 0x40) == 0) {
        *p = 0;
        return 0;
    }
    *p = x;
    return 1;
}

int func_1AB320(Obj *o)
{
    Ptrs *pp;
    int ret;
    First *first;

    pp = o->ptrs;
    if (!Resolve(&pp->p1)) return 0;
    if (!Resolve(&pp->p0)) return 0;
    if (!Resolve(&pp->p2)) return 0;
    if (!Reloc(&pp->p3)) return 0;
    if (!Resolve(&pp->p4)) return 0;
    if (!Reloc(&pp->p5)) return 0;
    if (func_027A30(0x74, 0xFF) == 0) {
        ret = 1;
    } else {
        first = (First *)pp->p0;
        first->sub->b0C = 1;
        func_1F8A18((Obj *)first);
        ret = -1;
    }
    return ret;
}
