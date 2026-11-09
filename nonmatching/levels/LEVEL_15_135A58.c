/* LEVEL_15.REL:0x135A58: reviewed 152-byte candidate, held for ABI review.
 * Walks two tables in lockstep, calling a setup helper on each pair.
 * pinned C with gnu-ee-trial links 152/152 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_13EB00 returning void with (pointer, pointer, pointer,
 * pointer, pointer), but the held byte-exact candidate LEVEL_15_13EB00.c defines it returning
 * void with (pointer, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_00171BE8[];
extern char D_002F518C[];
extern char D_0015E030[];
extern void func_0E98E8(void *a);
extern void func_13EB00(void *a, void *b, void *c, void *d, void *e);

void func_135A58(void)
{
    char *s3 = D_002F518C;
    char *s0 = D_00171BE8;
    char *s5 = D_00171BE8 + 0x18;
    char *s2 = s3 + 0x60;
    char *s1 = s3;

    do {
        func_0E98E8(s1);
        s1 += 0xC8;
        func_13EB00(s2, D_0015E030, s3 - 0x168, s0, s3 - 0x150);
        s0 += 0xC;
        s2 += 0xC8;
    } while ((int)s0 < (int)s5);
}
