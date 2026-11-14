/* LEVEL_10:0x1B1EE0 -- placement copy of LEVEL_04_1B11C8.c: resets the object's state block: zeroes the counters, sets the three scale fields to 1.0 and the id field to all ones, runs the setup, links the block back to the object, clears two more fields and flags the object; returns 1. */
typedef struct {
    char pad00[0x7C0];
    int w7C0;
    void *owner;
    char pad7C8[0x18];
    int w7E0;
    int w7E4;
    char pad7E8[4];
    int w7EC;
    int w7F0;
    int w7F4;
    int w7F8;
    float s7FC;
    float s800;
    float s804;
    unsigned int id808;
} State;

typedef struct {
    char pad00[0x58];
    State *state;
    char pad5C[8];
    unsigned int flags;
} Obj;

extern void func_1B3518(void);

int func_1B1EE0(Obj *o)
{
    State *s = o->state;

    s->w7EC = 0;
    s->w7F0 = 0;
    s->w7F4 = 0;
    s->w7F8 = 0;
    s->w7C0 = 0;
    s->s7FC = 1.0f;
    s->s800 = 1.0f;
    s->s804 = 1.0f;
    s->id808 = 0xFFFFFFFFu;
    func_1B3518();
    s->owner = o;
    s->w7E0 = 0;
    s->w7E4 = 0;
    o->flags |= 0x20;
    return 1;
}
