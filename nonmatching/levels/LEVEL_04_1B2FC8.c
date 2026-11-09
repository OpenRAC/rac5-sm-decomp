/* LEVEL_04.REL:0x1B2FC8: reviewed 104-byte candidate, held for ABI review.
 * Packs six small fields into one word and passes it to two helpers.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 2 other USA placements, but the prototypes disagree.
 * It declares func_099A40 returning int with (pointer, int, pointer, int, int,
 * int, int), but the accepted LEVEL_04_099A40.c defines it returning void with
 * (pointer, int, int, int, int, int, int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_001B24B8[];
int func_099A40(void *rec, unsigned int mode, char *tab, int n, int a4, int a5, int a6);
void func_099C18(void *rec);

void func_1B2FC8(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
    unsigned int rec[4];

    a0 <<= 27;
    a1 <<= 16;
    a0 |= a1;
    a2 <<= 15;
    a4 = (a4 << 10) | 0x1000;
    a0 |= a2;
    a0 |= a4;
    a5 <<= 6;
    a0 |= a5;
    a1 = a0 | 0x19;
    func_099A40(rec, a1, D_001B24B8, 48, 0, -1, 0);
    func_099C18(rec);
}
