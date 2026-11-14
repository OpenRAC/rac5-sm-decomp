/* LEVEL_04:0x15C6E8 -- placement copy of LEVEL_01_14FF98.c: message handler: when the record's flag bit is set and the message names the record's first link, plays the effect for the message's slot. */
typedef struct Rec {
    int link;
    char pad_04[0x5C];
    unsigned int flags;
} Rec;

typedef struct Obj {
    char pad_00[0x58];
    Rec *rec;
} Obj;

typedef struct Msg {
    int link;
    char pad_04[4];
    int slot;
} Msg;

extern void func_0E19E0(int a, int b, unsigned int c, int d, int e, int f, unsigned int g, float f0, float f1, float f2);

void func_15C6E8(Obj *o, Msg *m)
{
    Rec *r = o->rec;

    if (r->flags & 1) {
        if (r->link == m->link) {
            func_0E19E0(0, 0, 0xFFFFFFFFu, 0xAA, 7, 0, 1u << m->slot, 5.0f, 3.0000002f, 0.75f);
        }
    }
}
