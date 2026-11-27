/* LEVEL_01:0x1B64B0 -- runs the record cleanup, decrements the use counter selected by the record's index (clamped at zero) and releases the owner when one is linked. */
extern int D_00208E38[];
extern void func_1B6348(char *record);
extern void func_144050(char *object);

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

void func_1B64B0(struct Obj_1B64B0 *o)
{
    struct State_1B64B0 *s = o->state;
    int zero;
    const int *src;
    struct Rec_1B64B0 *r;

    func_1B6348((char *)o);
    zero = 0;
    r = *(struct Rec_1B64B0 **)s;
    src = &zero;
    if (zero < r->index) {
        src = &r->index;
    }
    D_00208E38[*src]--;
    if (s->owner != 0) {
        func_144050(s->owner);
    }
}
