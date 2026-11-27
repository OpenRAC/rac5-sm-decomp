/* LEVEL_22:0x11BBC0 -- when the timer has run out, signals the object with mode 1 or 2 chosen by its sub record's flag. */
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

extern void func_11B0C8(Obj *self, unsigned char prev, unsigned char state);

static inline unsigned char SubMode(Sub *sub)
{
    if (sub->flag)
        return 1;
    return 2;
}

void func_11BBC0(Obj *obj)
{
    Sub *sub = obj->sub;

    if (obj->timer <= 0.0f) {
        unsigned char mode = SubMode(sub);
        func_11B0C8(obj, obj->index, mode);
    }
}
