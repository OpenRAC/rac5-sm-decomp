/* USA LEVEL_16.REL:0x06F940, 224-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x78.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Target {
    char pad_00[0x3C];
    unsigned int flags_3C;
} Target;

typedef struct Class {
    char pad_00[0x18];
    void (*notify_18)(void *o);
} Class;

typedef struct Link {
    char pad_00[0x10];
    Target *target_10;
    char pad_14[0x40 - 0x14];
    unsigned short count_40;
    unsigned short count_42;
} Link;

typedef struct Obj {
    char pad_00[0x40];
    int link_40;
    char pad_44[0x64 - 0x44];
    int flags_64;
} Obj;

#define LINK(o) ((Link *)(o)->link_40)

extern void func_0751F0(void);
extern void func_06FA20(Obj *o);

void func_06F940(Obj *o)
{
    Target *t;

    if ((o->flags_64 & 1) != 0) {
        func_0751F0();
        ((Class *)LINK(o))->notify_18(o);
        if ((o->flags_64 & 1) != 0) {
            if (LINK(o) != 0)
                LINK(o)->count_40--;
        }
        o->flags_64 &= ~1;
        t = LINK(o)->target_10;
        if (t != 0 && (t->flags_3C & 0x80) != 0) {
            func_06FA20(o);
            return;
        }
        if ((o->flags_64 & 6) == 0) {
            if (LINK(o) != 0)
                LINK(o)->count_42++;
        }
        o->flags_64 |= 6;
    }
}
