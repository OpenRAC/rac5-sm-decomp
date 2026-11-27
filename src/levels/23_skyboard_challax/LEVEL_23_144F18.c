/* LEVEL_23:0x144F18 -- placement copy of LEVEL_22_11BBC0.c: when the timer has run out, signals the object with mode 1 or 2 chosen by its sub record's flag. */
typedef struct {
    char pad[0x1D];
    unsigned char flag;
} Sub;

typedef struct {
    char pad[0x45];
    unsigned char index;
    char pad46[0xE];
    Sub *sub;
    char pad58[0x18];
    float timer;
} Obj;

extern void func_144420(Obj *self, unsigned char prev, unsigned char state);

static inline unsigned char SubMode(Sub *sub)
{
    if (sub->flag)
        return 1;
    return 2;
}

void func_144F18(Obj *obj)
{
    Sub *sub = obj->sub;

    if (obj->timer <= 0.0f) {
        unsigned char mode = SubMode(sub);
        func_144420(obj, obj->index, mode);
    }
}
