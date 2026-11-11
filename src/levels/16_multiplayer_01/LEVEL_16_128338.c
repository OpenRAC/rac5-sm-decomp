/* LEVEL_16:0x128338 -- when the linked target has a handler in its class, calls it with the global scale (multiplied by a factor in modes 1 and 2) and the object data. */
typedef struct Class {
    char pad_00[0x20];
    void (*fn)(float scale, void *target, int a, int b, void *c, void *d, void *e);
} Class;

typedef struct Target {
    char pad_00[0x40];
    Class *cls;
} Target;

typedef struct Sub {
    int mode;
    float scale;
    int b;
    int c;
} Sub;

typedef struct Cfg {
    char pad_00[0x140];
    Sub sub;
} Cfg;

extern Cfg D_001CDC28;
extern float D_001E0630;

static __inline__ int GetMode(Cfg *c)
{
    return c->sub.mode;
}

static __inline__ int GetModeG(void)
{
    return D_001CDC28.sub.mode;
}

void func_128338(char *obj)
{
    char *data;
    Target *target;
    Class *cls;
    void *pos;
    Cfg *c;
    Sub *s;
    float f;

    data = *(char **)(obj + 0x58);
    target = *(Target **)(data + 4);
    data = data + 0xC;
    if (target == 0) {
        return;
    }
    cls = target->cls;
    pos = obj + 0x30;
    if (cls->fn == 0) {
        return;
    }
    c = &D_001CDC28;
    s = &c->sub;
    if (GetMode(c) != 0 && GetMode(c) >= 0 && GetMode(c) < 3) {
        f = D_001E0630 * s->scale;
    } else {
        f = s->scale;
    }
    cls->fn(f, target, s->b, s->c, pos, data, obj);
}
