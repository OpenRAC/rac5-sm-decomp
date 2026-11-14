/* LEVEL_08:0x1BD870 -- placement copy of LEVEL_04_19CB40.c: countdown of an armed object: when the timer runs out it releases the record's handle through the matching helper and disarms the object. */
typedef struct Rec {
    char pad0[0x10];
    char *handle;
} Rec;

typedef struct Obj {
    char pad0[0x45];
    unsigned char kind;
    unsigned char armed;
    char pad47[0x11];
    Rec *rec;
    char pad5C[0x14];
    float timer;
} Obj;

extern void func_1B8A28(char *handle);
extern void func_1BC288(char *handle);

void func_1BD870(Obj *o)
{
    Rec *r = o->rec;

    if (o->armed == 1) {
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f) {
            if (o->kind == 1) {
                func_1B8A28(r->handle);
                r->handle = 0;
            } else {
                func_1BC288(r->handle);
                r->handle = 0;
            }
            o->armed = 0;
        }
    }
}
