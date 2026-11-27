/* LEVEL_19:0x128CF0 -- placement copy of LEVEL_16_1283B8.c: validates the object's two linked targets (the first one is dropped when its state nibble is not 1); when both are usable, calls the first target's class handler with the global scale (multiplied in modes 1 and 2) and the object data, and finishes through the shared helper when the handler reports 3 or anything was missing. */
typedef struct Class {
    char pad_00[0x20];
    int (*fn)(float scale, void *target, int a, int b, void *c, void *d, void *e);
} Class;

typedef struct Target {
    char pad_00[0x40];
    Class *cls;
    char pad_44[0x64 - 0x44];
    unsigned int flags;
} Target;

typedef struct Data {
    char pad_00[4];
    Target *first;
    Target *second;
} Data;

typedef struct Sub {
    int mode;
    float scale;
    int b;
    int c;
} Sub;

typedef struct Cfg {
    char pad_00[0x130];
    Sub sub;
} Cfg;

extern Cfg D_001CEE28;
extern float D_001E07B0;
extern void func_06F9A8(char *obj);

static __inline__ int GetMode(Cfg *c)
{
    return c->sub.mode;
}

void func_128CF0(char *obj)
{
    Data *d;
    Target *first;
    Target *t;
    Class *cls;
    void *pos;
    Cfg *c;
    Sub *s;
    float f;
    int r;

    d = *(Data **)(obj + 0x58);
    first = d->first;
    if (first == 0) {
        goto fail;
    }
    if ((first->flags & 0xF) != 1) {
        d->first = 0;
    }
    t = d->first;
    if (t == 0 || d->second == 0 || (d->second->flags & 0xF) != 1) {
fail:
        ((void (*)(char *obj, int a1))func_06F9A8)(obj, 1);
        return;
    }
    d = (Data *)((char *)d + 0xC);
    cls = t->cls;
    pos = obj + 0x30;
    if (cls->fn == 0) {
        r = -1;
    } else {
        c = &D_001CEE28;
        s = &c->sub;
        if (GetMode(c) != 0 && GetMode(c) >= 0 && GetMode(c) < 3) {
            f = D_001E07B0 * s->scale;
        } else {
            f = s->scale;
        }
        r = cls->fn(f, t, s->b, s->c, pos, d, obj);
    }
    if (r == 3) {
        ((void (*)(char *obj, int a1))func_06F9A8)(obj, 1);
    }
}
