/* LEVEL_10:0x1AB118 -- state handler: for a hit of another object tagged 0x6513E0ED (or the object itself) in state 0x18/0x19 it arms the record once (flag 0xF), forwards the hit data and moves to state 0x1A; in state 0x1A it just reports 1; everything else goes to the default handler. */
typedef struct Tag {
    char pad00[0x24];
    unsigned int key;
} Tag;

typedef struct Sub {
    int w0;
    int w4;
    int w8;
    int wC;
} Sub;

typedef struct Rec {
    char pad00[0x28];
    Sub sub;
    char pad38[0x68 - 0x38];
    unsigned char armed;
} Rec;

typedef struct Obj {
    char pad00[0x40];
    Tag *tag;
    char pad44[1];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

typedef struct Hit {
    char pad00[0x40];
    Tag *tag;
} Hit;

extern void func_014810(Sub *dst, Obj *o, int a, int b, Hit *hit);
extern void func_1AAB68(Obj *o, int state);
extern int func_1E1D98(Obj *o, int p1, int p2, int a, int b, Hit *hit);

int func_1AB118(Obj *o, int p1, int p2, int a, int b, Hit *hit)
{
    Rec *rec = o->rec;
    Sub *d;

    if (hit != 0 && (hit->tag == o->tag || hit->tag->key == 0x6513E0EDu)) {
        if (o->state == 0x18 || o->state == 0x19) {
            if (rec->armed == 0) {
                d = &rec->sub;
                rec->armed = 0xF;
                func_014810(d, o, a, b, hit);
                d->wC = 0;
                func_1AAB68(o, 0x1A);
            }
            return 1;
        }
        if (o->state == 0x1A)
            return 1;
    }
    return func_1E1D98(o, p1, p2, a, b, hit);
}
