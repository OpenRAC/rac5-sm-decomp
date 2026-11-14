/* USA LEVEL_10.REL:0x1AB118, 192-byte candidate (14 November 2026).
 * Measured pinned: 24 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Tag {
    char pad00[0x24];
    unsigned int key;
} Tag;

typedef struct Rec {
    char pad00[0x28];
    int w28;
    int w2C;
    int w30;
    char pad34[0x68 - 0x34];
    unsigned char armed;
} Rec;

typedef struct Obj {
    char pad00[0x40];
    Tag *tag;
    char pad44[1];
    unsigned char state;
    char pad46[0x58 - 0x46];
    Rec *rec;
} Obj;

typedef struct Hit {
    char pad00[0x40];
    Tag *tag;
} Hit;

extern void func_014810(void *dst, Obj *o, int a, int b, Hit *hit);
extern void func_1AAB68(Obj *o, int state);
extern int func_1E1D98(Obj *o);

int func_1AB118(Obj *o, int p1, int p2, int a, int b, Hit *hit)
{
    Rec *rec;
    unsigned int state;

    if (hit != 0) {
        if (hit->tag != o->tag && hit->tag->key != 0x6513E0EDu) {
            return func_1E1D98(o);
        }
        state = o->state;
        rec = o->rec;
        if (state - 0x18 < 2) {
            if (rec->armed != 0) {
                return 1;
            }
            rec->armed = 0xF;
            func_014810(&rec->w28, o, a, b, hit);
            rec->w2C = 0;
            func_1AAB68(o, 0x1A);
            return 1;
        }
        if (state == 0x1A) {
            return 1;
        }
    }
    return func_1E1D98(o);
}
