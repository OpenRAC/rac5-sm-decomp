/* LEVEL_08:0x15AB20 -- placement copy of LEVEL_01_1486A0.c: resets the attached record, raises a flag bit, restarts two helpers and plays a one-shot sequence; returns 1. */
typedef struct {
    int f0;
    int f4;
    char pad8[0x2C - 8];
    char f2c[4];
} State;

typedef struct {
    char pad0[0x46];
    unsigned char b46;
} Tail;

typedef struct {
    char pad0[0x58];
    State *state;
    char pad5c[0x64 - 0x5C];
    unsigned int flags;
} Obj;

extern void func_13D728(char *object);
extern void func_13DC58(void *p);
extern void func_084C98(void *obj, int id, int a, int b, float f, float g);

int func_15AB20(Obj *o)
{
    State *s = o->state;

    s->f0 = 0;
    o->flags |= 0x40000;
    func_13D728(s->f2c);
    func_13DC58((char *)s + 8);
    s->f4 = 1;
    func_084C98(o, 1, 0, 1, 0.1f, 0.0f);
    ((Tail *)o)->b46 = 0;
    return 1;
}
