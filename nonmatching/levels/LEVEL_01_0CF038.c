/* LEVEL_01.REL:0x0CF038: reviewed 344-byte candidate, held for ABI review.
 * Picks a table entry for the current object: a free slot, a keyed slot, or a
 * mapped slot, else a default entry.
 * pinned C with gnu-ee-trial links 344/344 bytes and is byte-exact at this and
 * 9 other USA placements, but the prototypes disagree.
 * It declares func_0D83F8 returning pointer with (pointer), but the accepted
 * LEVEL_01_0D83F8.c defines it returning int with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int key_00;
    char pad_04[0x14];
} Ent;

typedef struct {
    char pad_00[0x14];
    int key_14;
} Obj;

extern Ent D_00203080;
extern Ent D_00203368[];
extern Ent D_00203098[];
extern Ent D_00203230[];
extern char D_0032C9A0[];

extern Obj *func_0D83F8(char *p);
extern int func_0CF4A0(Obj *o);
extern int func_0CF4E0(Obj *o);
extern int func_0CF4C0(Obj *o);

Ent *func_0CF038(void)
{
    Obj *o;
    unsigned int i;

    o = func_0D83F8(D_0032C9A0);
    if (o == 0) {
        return &D_00203080;
    }
    if (func_0CF4A0(o) != 0) {
        if (func_0CF4E0(o) != 0) {
            for (i = 0; i < 12; i++) {
                if (D_00203368[i].key_00 == 0) {
                    return &D_00203368[i];
                }
            }
        } else {
            for (i = 0; i < 12; i++) {
                if (D_00203368[i].key_00 == o->key_14) {
                    return &D_00203368[i];
                }
            }
        }
    } else {
        if (func_0CF4C0(o) != 0) {
            for (i = 0; i < 13; i++) {
                if (D_00203098[i].key_00 == o->key_14) {
                    return &D_00203230[i];
                }
            }
        } else {
            for (i = 0; i < 17; i++) {
                if (D_00203098[i].key_00 == o->key_14) {
                    return &D_00203098[i];
                }
            }
        }
    }
    return &D_00203080;
}
