/* USA LEVEL_01.REL:0x1B3468, 168-byte candidate (14 November 2026).
 * Measured pinned: 21 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad00[0x24]; unsigned int id; char pad28[0x1C]; } Ent;
typedef struct { char pad00[0x34]; Ent *ents; unsigned int count; } Tab;
typedef struct { char pad00[0x0C]; int w0C; } Obj;
extern Tab *D_00206D90;
extern int D_00208DD0[1];
extern Ent *D_00208DD4;
extern Ent *D_00208DD8;

void func_1B3468(Obj *o)
{
    Tab *t;
    Ent *r;
    unsigned int i;

    D_00208DD0[0] = o->w0C;
    t = D_00206D90;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == 0xB2C32519u) {
            r = &t->ents[i];
            goto first;
        }
    }
    r = 0;
first:
    D_00208DD4 = r;
    t = D_00206D90;
    for (i = 0; i < t->count; i++) {
        if (t->ents[i].id == 0xCBD958AFu) {
            r = &t->ents[i];
            goto second;
        }
    }
    r = 0;
second:
    D_00208DD8 = r;
}
