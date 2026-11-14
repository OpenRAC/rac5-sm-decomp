/* LEVEL_16:0x15D258 -- contact callback: when the state's flag bit 0 is set and the contact's owner is this state's owner, sends the progress ratio (clamped to 1.0) with the owner's counter minus one. */
typedef struct Owner {
    char pad_00[0xF4];
    int counter;
} Owner;

typedef struct State {
    Owner *owner;
    char pad_04[0xC - 0x4];
    float elapsed;
    char pad_10[0x2C - 0x10];
    float duration;
    char pad_30[0x18C - 0x30];
    unsigned int flags;
} State;

typedef struct Obj {
    char pad_00[0x58];
    State *state;
} Obj;

extern void func_0A3A98(int a0, int a1, float f);

void func_15D258(Obj *o, Owner **other)
{
    State *s = o->state;
    float t;

    if (s->flags & 1) {
        if (s->owner == *other) {
            t = s->elapsed / s->duration;
            if (t > 1.0f) {
                t = 1.0f;
            }
            func_0A3A98(s->owner->counter - 1, 3, t);
        }
    }
}
