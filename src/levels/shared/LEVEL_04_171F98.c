/* LEVEL_04:0x171F98 -- classifies the object's entries: 1 when only the second flag kind is seen, 2 when the first is missing, else 0. */
typedef struct C { char pad00[0x40]; unsigned int flags; } C;
typedef struct B { char pad00[0x10]; C *c; } B;
typedef struct A { char pad00[0x40]; B *b; } A;
typedef struct Entry { A *a; int w04; } Entry;
typedef struct State { Entry entries[8]; int w40; unsigned char count; } State;
typedef struct Child { char pad00[0x58]; State *state; } Child;
typedef struct Res { Child *child; } Res;
typedef struct Obj { char pad00[0x54]; Res *res; } Obj;

int func_171F98(Obj *object)
{
    State *state;
    int has_two, has_one;
    unsigned int i;
    unsigned int flags;
    unsigned int count;
    int r;

    state = object->res->child->state;
    has_two = 0;
    has_one = 0;
    count = state->count;
    for (i = 0; i < count; i++) {
        flags = state->entries[i].a->b->c->flags;
        if (flags & 2)
            has_two = 1;
        else if (flags & 1)
            has_one = 1;
    }

    if (!has_one || (r = 1, has_two)) {
        r = 2;
        if (has_one)
            r = 0;
    }
    return r;
}
