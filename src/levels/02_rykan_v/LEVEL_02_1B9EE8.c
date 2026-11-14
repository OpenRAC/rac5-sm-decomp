/* LEVEL_02:0x1B9EE8 -- placement copy of LEVEL_01_19F520.c: when the trigger is a type 1 or 9 entry, switches the object to mode 3, sets its flag, clears word 0x68 and stops the record's sound, reporting 3; otherwise reports 1. */
typedef struct Rec {
    char pad00[0x20];
    void *sound;
} Rec;

typedef struct Type {
    char pad00[0x3F];
    unsigned char kind;
} Type;

typedef struct Trigger {
    char pad00[0x40];
    Type *type;
} Trigger;

typedef struct Obj {
    char pad00[0x45];
    unsigned char mode;
    char pad46[0x58 - 0x46];
    Rec *rec;
    char pad5C[0x64 - 0x5C];
    unsigned int flags;
    unsigned int f68;
} Obj;

extern void func_082F58(void *sound, int n);

int func_1B9EE8(Obj *o, int a1, int a2, int a3, int a4, Trigger *t)
{
    Rec *r = o->rec;

    if (t != 0) {
        unsigned int kind = t->type->kind;

        if (kind == 1 || kind == 9) {
            o->mode = 3;
            o->flags |= 0x40;
            o->f68 = 0xFFFFFFFFu;
            if (r->sound != 0) {
                func_082F58(r->sound, 1);
            }
            return 3;
        }
    }
    return 1;
}
