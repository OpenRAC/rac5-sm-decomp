/* LEVEL_24:0x197F98 -- placement copy of LEVEL_01_1B64B0.c: runs the record cleanup, decrements the use counter selected by the record's index (clamped at zero) and releases the owner when one is linked. */
extern int D_001D9E10[];
extern void func_197E30(char *record);
extern void func_139E70(char *object);

struct Rec_1B64B0 {
    char pad_00[0xF8];
    int index;
};

struct State_1B64B0 {
    struct Rec_1B64B0 *rec;
    char pad_04[0x7C];
    char *owner;
};

struct Obj_1B64B0 {
    char pad_00[0x58];
    struct State_1B64B0 *state;
};

void func_197F98(struct Obj_1B64B0 *o)
{
    struct State_1B64B0 *s = o->state;
    int zero;
    const int *src;
    struct Rec_1B64B0 *r;

    func_197E30((char *)o);
    zero = 0;
    r = *(struct Rec_1B64B0 **)s;
    src = &zero;
    if (zero < r->index) {
        src = &r->index;
    }
    D_001D9E10[*src]--;
    if (s->owner != 0) {
        func_139E70(s->owner);
    }
}
