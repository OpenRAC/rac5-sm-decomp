/* LEVEL_04.REL:0x1103F8: reviewed 92-byte candidate, held for ABI review.
 * Masks a state word, then runs two helpers on a stack record.
 * pinned C with gnu-ee-trial links 92/92 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_099A40 returning int with (pointer, int, pointer, int, int,
 * int, int), but the accepted LEVEL_04_099A40.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0010F570[];
int func_099A40(void *rec, unsigned int mode, char *tab, int n, int a4, int a5, int a6);
void func_099C18(void *rec);

void func_1103F8(unsigned int a0)
{
    unsigned int rec[4];
    unsigned int m;

    m = (a0 & 0xFFFFFFC3) | 4;
    m = (m & 0xFFFFFFFC) | 1;
    func_099A40(rec, m, D_0010F570, 76, 0, -1, 0);
    func_099C18(rec);
}
