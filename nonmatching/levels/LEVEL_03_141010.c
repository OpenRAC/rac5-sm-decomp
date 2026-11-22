/* USA LEVEL_03.REL:0x141010, 212-byte candidate (21 November 2026).
 * Measured pinned: 27 differing words; first difference at 0x24.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Link {
    char pad_00[0x64];
    unsigned int flags_64;
} Link;

typedef struct State {
    char pad_00[0xC];
    Link *link_0C;
} State;

typedef struct Rec {
    char pad_00[0x15];
    unsigned char flag_15;
} Rec;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char mode_45;
    char pad_46[0x54 - 0x46];
    State *state_54;
    Rec *rec_58;
} Obj;

extern char D_00234F78[];
extern int func_12CF30(void);
extern void func_12CFB8(unsigned int value);
extern int func_12CF60(void);
extern void func_0B8D50(void *first, void *second);
extern void func_12D008(unsigned int value);
extern void func_07C468(Link *l, int a);

void func_141010(Obj *o, unsigned char from, unsigned char to)
{
    State *state;
    Rec *rec;
    int r;
    Link *l;

    if (from != to) {
        state = o->state_54;
        rec = o->rec_58;
        if (to == 1) {
            r = func_12CF30();
            func_12CFB8(0);
            if (func_12CF60() != 0) {
                func_0B8D50(D_00234F78, (void *)0x2B8);
                func_12D008(0);
            }
            if (r == 0) {
                o->mode_45 = 1;
                return;
            }
            l = state->link_0C;
            if (l != 0 && (l->flags_64 & 1) != 0) {
                func_07C468(l, 1);
                state->link_0C = 0;
            }
            rec->flag_15 = 1;
        }
        o->mode_45 = to;
    }
}
