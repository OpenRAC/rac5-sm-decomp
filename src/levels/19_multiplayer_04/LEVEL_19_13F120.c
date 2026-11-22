/* LEVEL_19:0x13F120 -- placement copy of LEVEL_16_142488.c: clears the state record, marks the object, seeds the record and, by the model entry's kind, starts one of three variants (two of them also requiring a shared check, returning -1 when it fails); returns 1. */
typedef struct Rec {
    int w00;
    float f04;
    char pad08[4];
    unsigned char b0C;
    char pad0D[3];
    int w10;
    char pad14[4];
    float f18;
    int w1C;
    unsigned char b20;
} Rec;

typedef struct Entry {
    char pad00[0x20];
    int kind;
    char pad24[0x10];
} Entry;

typedef struct Model {
    char pad00[4];
    Entry *entries;
} Model;

typedef struct Obj {
    char pad00[0x40];
    Model *model;
    unsigned char idx;
    char pad45[0x13];
    Rec *rec;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern void *memset(void *, int, unsigned int);
extern void func_13FCB8(Obj *o, int variant);
extern int func_1135A8(void);

int func_13F120(Obj *o)
{
    Rec *r = o->rec;
    int kind;

    memset(r, 0, 0x2C);
    o->flags |= 0x20;
    r->f04 = 0.5f;
    r->b0C = 1;
    kind = o->model->entries[o->idx].kind;
    if (kind == 0xC3CCF603) {
        func_13FCB8(o, 0);
        r->w10 = 0;
        if (func_1135A8() == 0) {
            return -1;
        }
    } else if (kind == 0x5D8ED8B5) {
        func_13FCB8(o, 1);
        r->w10 = 1;
        if (func_1135A8() == 0) {
            return -1;
        }
    } else if (kind == 0x9E7634E5) {
        func_13FCB8(o, 2);
        r->w00 = 0;
        r->w10 = 2;
        o->flags |= 0x20;
    }
    r->b20 = 0;
    r->w1C = 0;
    r->f18 = 0.10000000149011612f;
    return 1;
}
