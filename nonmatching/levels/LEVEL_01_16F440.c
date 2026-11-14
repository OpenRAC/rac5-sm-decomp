/* USA LEVEL_01.REL:0x16F440, 76-byte candidate (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 16.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec {
    int w0;
    int w4;
    int w8;
} Rec;

typedef struct Link {
    char pad_00[0x63];
    unsigned char empty;
} Link;

typedef struct Obj {
    char pad_00[0x45];
    unsigned char state;
    char pad_46[0xE];
    Rec *rec;
    Link *link;
} Obj;

int func_16F440(Obj *o)
{
    Rec *rec = o->rec;
    Link *link = o->link;
    int empty;

    link->empty = empty = (rec->w8 == 0);
    if (empty) {
        if (rec->w0 != 0)
            return 1;
        if (rec->w4 != 0)
            return 1;
        return o->state == 4;
    }
    return 0;
}
