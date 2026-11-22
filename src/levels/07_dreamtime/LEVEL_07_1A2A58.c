/* LEVEL_07:0x1A2A58 -- placement copy of LEVEL_03_18DB90.c: clears the object's state record and sets the two size bytes from the config flag. */
extern void *memset(void *dst, int value, unsigned int size);

typedef struct Cfg {
    char pad0[0xD];
    unsigned char flag;
} Cfg;

typedef struct Rec {
    char pad0[0x130];
    unsigned char b130;
} Rec;

typedef struct Obj {
    char pad0[0x54];
    Cfg *cfg;
    Rec *rec;
    char pad5C[0x76 - 0x5C];
    unsigned char b76;
    unsigned char b77;
} Obj;

int func_1A2A58(Obj *o)
{
    Rec *r = o->rec;
    Cfg *c = o->cfg;

    memset(r, 0, 0x134);
    if (c->flag) {
        o->b77 = 0x14;
        o->b76 = 0x19;
    } else {
        o->b77 = 0x19;
        o->b76 = 0x20;
    }
    r->b130 = 0;
    return 1;
}
