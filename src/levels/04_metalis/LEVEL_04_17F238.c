/* LEVEL_04:0x17F238 -- placement copy of LEVEL_01_171D40.c: clears the object's two 0x54-byte blocks and, unless it is in state 3, converts the first two offsets of the linked record into pointers (the first must be set), starts the shared lookup and stores its result in a global, clears one field and returns 1. */
extern void *memset(void *p, int c, unsigned int n);

typedef struct {
    int w00;
    int w04;
} Link;

typedef struct {
    char pad00[0xA8];
    int fA8;
} Rec;

typedef struct {
    char pad00[0x45];
    unsigned char state;
    char pad46[0xE];
    Link *link;
    Rec *rec;
} Obj;

extern int D_002201B4;
extern int D_003B06B0[1];
extern int func_0F1278(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int t0);

int func_17F238(Obj *o)
{
    Rec *rec = o->rec;
    Link *link = o->link;
    int ok;
    int a;
    int b;

    memset(rec, 0, 0x54);
    memset((char *)rec + 0x54, 0, 0x54);
    if (o->state == 3) {
        return 0;
    }
    a = link->w00;
    if (a == 0) {
        ok = 0;
    } else {
        link->w00 = D_002201B4 + a;
        ok = 1;
    }
    if (!ok) {
        return 0;
    }
    b = link->w04;
    if (b != 0) {
        link->w04 = D_002201B4 + b;
    }
    D_003B06B0[0] = func_0F1278(0xC, 0, 0, 0, 3);
    o->rec->fA8 = 0;
    return 1;
}
