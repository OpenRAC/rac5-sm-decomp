/* LEVEL_04:0x19CB40 -- countdown of an armed object: when the timer runs out it releases the record's handle through the matching helper and disarms the object. */
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

extern void func_197CF8(char *handle);
extern void func_19B558(char *handle);

void func_19CB40(Obj *o)
{
    Rec *r = o->rec;

    if (o->armed == 1) {
        o->timer = o->timer - 1.0f;
        if (o->timer <= 0.0f) {
            if (o->kind == 1) {
                func_197CF8(r->handle);
                r->handle = 0;
            } else {
                func_19B558(r->handle);
                r->handle = 0;
            }
            o->armed = 0;
        }
    }
}
