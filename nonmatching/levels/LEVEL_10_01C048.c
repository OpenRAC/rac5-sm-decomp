/* USA LEVEL_10.REL:0x01C048, 384-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 24 differing words; first difference at 0x0.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { unsigned char kind; char pad[3]; int val; } Slot;
typedef struct { char pad[0xC]; Slot *slot[2]; int alt; char pad2[0x34 - 0x18]; } Row;
typedef struct { char pad[4]; Row *rows; char pad2[0x3F - 8]; unsigned char bit; } Def;
typedef struct { char pad[0x40]; Def *def; char pad2[0x44 - 0x44]; unsigned char row; } Obj;
typedef struct { int pad; Obj *obj; } Ref;
typedef struct { char pad[0x68]; } Ent;

extern Ref **D_00238BC8;
extern Ent D_00238AF8[2];
extern int func_096218(Ref **cur, Ent *e, void *a, void *b, float t, void *c, void *d);
extern int func_01F988(void *a, void *b, int v, int k, float t, Obj *o);
extern int func_1146D0(void *a, void *b, int v, float t, Obj *o);

Obj *func_01C048(void *a, void *b, void *c, void *d, float t, int mask, int idx)
{
    Ref **cur;
    Ref **end;
    Ref **it;
    Ent *e;
    Obj *o;
    Row *row;
    Slot *s;
    int n;

    cur = D_00238BC8;
    e = &D_00238AF8[0];
    do {
        cur += func_096218(cur, e, a, b, t, c, d);
        e++;
    } while (e < &D_00238AF8[2]);
    n = cur - D_00238BC8;
    it = D_00238BC8;
    end = it + n;
    for (; it != end; it++) {
        o = (*it)->obj;
        if (((mask >> o->def->bit) ^ 1) & 1)
            continue;
        row = &o->def->rows[o->row];
        s = row->slot[idx];
        if (s != 0) {
            if (func_01F988(a, b, s->val, s->kind, t, o))
                return o;
        } else {
            if (func_1146D0(a, b, row->alt, t, o))
                return o;
        }
    }
    return 0;
}
