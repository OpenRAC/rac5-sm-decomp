/* LEVEL_18:0x155AA0 -- primes the slot record of an object from its bank entry, flips the speed sign for one entry id, then starts two sound/anim requests. */

typedef struct {
    char pad_00[0x68];
    int f_68;
    char pad_6C[0x2C];
    float f_98;
    char pad_9C[0x5C];
} Rec;

typedef struct {
    char pad_00[0xC];
    Rec *recs;
} Sub;

typedef struct {
    char pad_00[4];
    Sub *sub;
    char pad_08[0x18];
    unsigned int id;
    char pad_24[0x10];
} Entry;

typedef struct {
    char pad_00[4];
    Entry *entries;
} Bank;

typedef struct {
    char pad_00[0xC];
    float f_0C;
    int slot;
} Link;

typedef struct {
    char pad_00[0x40];
    Bank *bank;
    unsigned char idx;
    char pad_45[2];
    unsigned char flag;
    char pad_48[0x10];
    Link *link;
} Obj;

extern void func_076988(Obj *o, Sub *s, int a2, unsigned int a3, int t0, int t1, int t2);
extern int func_084D50(Rec *r, int a1, int a2, int a3);

void func_155AA0(Obj *o)
{
    Rec *r;
    Link *l;

    l = o->link;
    r = &o->bank->entries[o->idx].sub->recs[l->slot];
    r->f_68 = 4;
    if (o->flag) {
        r->f_98 = l->f_0C;
    } else {
        r->f_98 = 0.0f;
    }
    if (o->bank->entries[o->idx].id == 0x97990472) {
        r->f_98 = -r->f_98;
    }
    func_076988(o, o->bank->entries[o->idx].sub, 0, 0xFFFFFFFD, 1, 0, 1);
    func_084D50(r, 0, o->flag, 1);
    func_076988(o, o->bank->entries[o->idx].sub, 0, 2, 0, 0, 1);
}
