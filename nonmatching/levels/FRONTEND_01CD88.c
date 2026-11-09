/* FRONTEND.REL:0x01CD88: reviewed 132-byte candidate, held for ABI review.
 * Duplicates a string into a fresh allocation and stores the pointer.
 * pinned C with gnu-ee-trial links 132/132 bytes and is byte-exact at this and
 * 20 other USA placements, but the prototypes disagree.
 * It declares func_01C870 returning pointer with (int, int, pointer, int), but
 * the accepted FRONTEND_01C870.c defines it returning void with (int, int,
 * int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00109568[];
extern void *func_01C870(int size, int z, char *file, int line);
extern unsigned int strlen(const char *s);
extern void *memcpy(void *d, const void *s, unsigned int n);

int func_01CD88(const char *src, void **out)
{
    int n;
    void *p;

    n = strlen(src) + 1;
    p = func_01C870(n, 0, D_00109568, 0x19B);
    if (p == 0) {
        return 0;
    }
    memcpy(p, src, n);
    *out = p;
    return 1;
}
