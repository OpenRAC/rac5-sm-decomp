/* LEVEL_01.REL:0x175350: reviewed 72-byte candidate, held for ABI review.
 * Calls a helper on a record with a table address, then a second helper on its
 * field at offset 0x1C.
 * pinned C with gnu-ee-trial links 72/72 bytes and is byte-exact at this and
 * 17 other USA placements, but the prototypes disagree.
 * It declares func_09FB18 returning void with (pointer, pointer), but the
 * accepted LEVEL_01_09FB18.c defines it returning void with (pointer, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_002215E0[];
extern void func_09FB18(void *, void *);
extern void func_0340B8(void *, long long, int);

void func_175350(char *record, long long value)
{
    func_09FB18(record, D_002215E0);
    func_0340B8(record + 0x1c, value, 0xffff);
}
