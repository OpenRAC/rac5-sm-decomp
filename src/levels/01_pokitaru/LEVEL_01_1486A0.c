/* LEVEL_01:0x1486A0 -- resets the attached record, raises a flag bit, restarts two helpers and plays a one-shot sequence; returns 1. */
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

extern void func_12C1F0(char *object);
extern void func_12C720(void *p);
extern void func_07CD28(void *obj, int id, int a, int b, float f, float g);

int func_1486A0(Obj *o)
{
    State *s = o->state;

    s->f0 = 0;
    o->flags |= 0x40000;
    func_12C1F0(s->f2c);
    func_12C720((char *)s + 8);
    s->f4 = 1;
    func_07CD28(o, 1, 0, 1, 0.1f, 0.0f);
    ((Tail *)o)->b46 = 0;
    return 1;
}
