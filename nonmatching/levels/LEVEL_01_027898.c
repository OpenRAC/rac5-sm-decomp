/* LEVEL_01.REL:0x027898: reviewed 228-byte candidate, held for ABI review.
 * Registers an id in the first free of eight slots unless already present.
 * pinned C with gnu-ee-trial links 228/228 bytes and is byte-exact at this and
 * 14 other USA placements, but the prototypes disagree.
 * It declares func_0245C8 returning int with (int, int), but the accepted
 * LEVEL_01_0245C8.c defines it returning pointer with (int, int).
 * It declares func_0B3C38 returning void with (pointer, int, int), but the
 * accepted LEVEL_01_0B3C38.c defines it returning void with (pointer, pointer,
 * pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Tbl {
    char pad[0x864];
    int slot[8];
    int aux[8];
};
struct Glob {
    struct Tbl *tbl;
};
extern struct Glob D_001F3FAC;
#define T (D_001F3FAC.tbl)
extern char D_0020CC78[];
extern int func_0245C8(int id, int v);
extern void func_0B3C38(char *msg, int code, unsigned v);

int func_027898(int id)
{
    unsigned i;
    unsigned j;
    int idx;

    if (!func_0245C8(id, -1)) {
        for (i = 0; i < 8; i++) {
            if (T->slot[i] == id)
                return 0;
        }
        idx = -1;
        for (j = 0; j < 8; j++) {
            if (T->slot[j] == 0) {
                idx = j;
                break;
            }
        }
        if (idx >= 0) {
            T->slot[idx] = id;
            T->aux[idx] = 0;
            return 1;
        }
        func_0B3C38(D_0020CC78, -0x34, 0xFFFFFFFF);
    }
    return 0;
}
