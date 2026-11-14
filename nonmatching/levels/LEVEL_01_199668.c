/* USA LEVEL_01.REL:0x199668, 168-byte candidate (14 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x4C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Rec {
    char pad00[0xC];
    char *w0C;
    char pad10[0x28];
    char *w38;
    char *w3C;
    char pad40[0x145];
    unsigned char b185;
};

struct Obj {
    char pad00[0x58];
    struct Rec *rec;
};

extern void func_080B38(char *record);
extern int *func_19B2A8(char *record);
extern void func_097620(char *record);

void func_199668(struct Obj *o)
{
    struct Rec *rec;

    rec = o->rec;
    if (rec->w38 != 0) {
        func_080B38(rec->w38);
        rec->w38 = 0;
    }
    if (rec->w3C != 0) {
        func_080B38(rec->w3C);
        rec->w3C = 0;
    }
    if (rec->w0C != 0) {
        (*(void (**)(char *, struct Obj *, int))func_19B2A8(rec->w0C))(rec->w0C, o, 2);
    }
    func_097620((char *)rec + 0xD4);
    func_097620((char *)rec + 0x110);
    func_097620((char *)rec + 0x5C);
    func_097620((char *)rec + 0x98);
    rec->b185 = 0;
}
