/* LEVEL_15.REL:0x128998: reviewed 88-byte candidate, held for ABI review.
 * Calls a per-record update twice over two adjacent records.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It declares func_1286F8 returning void with (pointer), but the accepted
 * LEVEL_15_02C060.c defines it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002F2DE8[];
extern void func_1286F8(char *a0);

void func_128998(void)
{
    char *p;
    int i;

    p = D_002F2DE8;
    i = 0;
    do {
        i++;
        func_1286F8(p);
        p += 0xEC;
    } while (i != 2);
}
