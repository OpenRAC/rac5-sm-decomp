/* LEVEL_10:0x175FB0 -- drains the object's gauge by the frame time: returns 1 while func_1743E8 reports state 8, otherwise subtracts the time from the gauge (mirroring it in the owner), returning 3 after switching to state 8 when it runs out, else 2 (requesting state 7 when the count is positive and the cooldown is over). */
typedef struct {
    char pad0[0x96C];
    float f96C;
} Owner;

typedef struct {
    char pad00[4];
    Owner *owner;
    char pad08[0x30 - 8];
    float f30;
    float f34;
    float f38;
    float f3C;
} Sub;

typedef struct {
    char pad00[0x50];
    Sub sub;
} Rec;

typedef struct {
    char pad00[0x58];
    Rec *rec;
} Obj;

extern int func_1743E8(char *object);
extern void func_1743F0(Sub *s, int state);

int func_175FB0(float dt, Obj *o, int unused, int n)
{
    Sub *s;

    s = &o->rec->sub;
    if (func_1743E8((char *)s) == 8)
        return 1;
    if (s->f38 <= 0.0f)
        s->f3C = 0.0f;
    s->f30 = s->f30 - dt;
    s->f38 = 1.0f;
    s->owner->f96C = s->f30;
    if (s->f30 <= 0.0f) {
        s->f30 = 0.0f;
        s->owner->f96C = 0.0f;
        func_1743F0(s, 8);
        return 3;
    }
    if (n > 0 && s->f34 <= 0.0f)
        func_1743F0(s, 7);
    return 2;
}
