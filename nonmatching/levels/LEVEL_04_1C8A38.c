/* LEVEL_04.REL:0x1C8A38: reviewed 228-byte candidate, held for ABI review.
 * Finds matching objects and clears a flag on their linked object.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_1C7B10 returning pointer with (pointer), but the accepted
 * LEVEL_04_1C7B10.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct { char pad0[0x20]; int id; } Ent;
typedef struct { char pad0[4]; char *ents; } Tab;
typedef struct { char pad0[0x40]; Tab *tab; unsigned char idx; } Obj;
typedef struct { char pad0[0x64]; int flags; } Lnk;
extern unsigned func_01C068(Obj **buf, int cnt, int a, int b, int c, int d, int e);
extern Lnk *func_1C7B10(Obj *o);
extern void func_1C3680(Lnk *l);

void func_1C8A38(int a)
{
    Obj *buf[0x20];
    unsigned n;
    unsigned i;
    Obj *o;
    Lnk *l;

    n = func_01C068(buf, 0x20, a, 0x89, 0x81, 0x10, 0);
    if (n == 0)
        return;
    for (i = 0; i < n; i++) {
        o = buf[i];
        if (((Ent *)(o->tab->ents + o->idx * 0x34))->id == (int)0xF3066045) {
            l = func_1C7B10(o);
            if (l) {
                l->flags &= ~0x10;
                func_1C3680(l);
            }
        }
    }
}
