/* USA LEVEL_06.REL:0x198190, 100-byte candidate (14 November 2026).
 * Measured pinned: 5 differing words; first difference at 0x14.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern char D_00221EC0[];
extern int D_00209670;

typedef struct Link {
    int w0;
} Link;

typedef struct Obj {
    char pad00[0x45];
    unsigned char state;
    char pad46[0x54 - 0x46];
    Link *link;
    int w58;
    int w5C;
} Obj;

extern int func_07D818(int a, char *b);
extern void func_026398(int a, int b, int c);
extern void func_076268(Obj *o, int n);

void func_198190(Obj *o)
{
    if (o->state == 0) {
        if (func_07D818(o->link->w0, D_00221EC0 + 0x30) != 0) {
            func_026398(D_00209670, o->w5C, 1);
            func_076268(o, 1);
        }
    }
}
