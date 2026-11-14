/* USA LEVEL_01.REL:0x15A6C0, 140-byte candidate (14 November 2026).
 * Measured pinned: 19 differing words; first difference at 0x3C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Rec { char pad00[0x3C]; int w3C; } Rec;
typedef struct Obj { char pad00[0x45]; unsigned char b45; char pad46[0xE]; Rec *f54; char *f58; } Obj;
typedef struct Tag { unsigned char b[4]; } Tag;
extern Tag D_0021EA38;
extern char D_0021E998[];
extern int func_031268(Rec *r, Obj *o, char *tab, int w, char *p, unsigned int mask, int n);
extern int func_15C960(Obj *obj);
extern void func_15C260(char *, unsigned char, int);
void func_15A6C0(Obj *o)
{
    Tag t = D_0021EA38;
    unsigned int m = *(unsigned int *)&t;
    if (func_031268(o->f54, o, D_0021E998, o->f54->w3C, o->f58 + 0x81, m, 0x40) != 0) {
        int r = func_15C960(o);
        func_15C260((char *)o, o->b45, r & 0xFF);
    }
}
