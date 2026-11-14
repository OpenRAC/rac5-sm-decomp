/* USA LEVEL_17.REL:0x150EF0, 172-byte candidate (14 November 2026).
 * Measured gnu-ee-trial: 21 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct State {
    int owner;
    char pad_04[0x58 - 0x04];
    unsigned int flags;
} State;

typedef struct Owner {
    char pad_00[0xF4];
    int counter;
    char pad_F8[0x59C - 0xF8];
    int id;
} Owner;

typedef struct Obj {
    char pad_00[0x58];
    State *state;
} Obj;

typedef struct Other {
    Owner *owner;
} Other;

extern char D_001C6E08[];
extern void func_0A1660(int a0, char *a1, int a2, unsigned int a3);
extern void func_150D40(Obj *o, Other *other, float dt);

void func_150EF0(Obj *o, Other *other, float dt)
{
    State *s = o->state;

    if (s->flags == 0) {
        return;
    }
    if (s->flags & 1) {
        if (other->owner->id == s->owner) {
            func_0A1660(other->owner->counter - 1, D_001C6E08, -0x69, 0xFFFFFFFFu);
        }
    }
    if (s->flags & 2) {
        func_150D40(o, other, dt);
    }
}
