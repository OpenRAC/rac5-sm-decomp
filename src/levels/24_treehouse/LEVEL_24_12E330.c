/* LEVEL_24:0x12E330 -- placement copy of LEVEL_01_138900.hitClass: when the linked target has a handler in its class, calls it with the global scale (multiplied by a factor in modes 1 and 2) and the object data. */
typedef struct Class {
    char pad_00[0x20];
    void (*fn)(float scale, void *target, int a, int b, void *c, void *d, void *e);
} Class;

typedef struct Target {
    char pad_00[0x40];
    Class *cls;
} Target;

typedef struct DamageInfo {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

typedef struct DamageTable {
    char pad_00[0x140];
    DamageInfo entry20;
} DamageTable;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageTable D_001E9AD8;
extern float D_001E0630;

static __inline__ int GetMode(DamageTable *c)
{
    return c->entry20.kind;
}

static __inline__ int GetModeG(void)
{
    return D_001E9AD8.entry20.kind;
}

void func_12E330(char *obj)
{
    char *data;
    Target *target;
    Class *cls;
    void *pos;
    DamageTable *c;
    DamageInfo *s;
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
    c = &D_001E9AD8;
    s = &c->entry20;
    if (GetMode(c) >= 0 && GetMode(c) >= 2 && GetMode(c) == 2) {
        f = s->damage * 0.5f;
    } else {
        f = s->damage;
    }
    cls->fn(f, target, s->element, s->hitClass, pos, data, obj);
}
