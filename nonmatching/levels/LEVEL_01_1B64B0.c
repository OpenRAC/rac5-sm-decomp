/* USA LEVEL_01.REL:0x1B64B0, 116-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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
    int *src;

    func_1B6348((char *)o);
    zero = 0;
    src = s->rec->index > 0 ? &s->rec->index : &zero;
    D_00208E38[*src] = D_00208E38[*src] - 1;
    if (s->owner != 0) {
        func_144050(s->owner);
    }
}
