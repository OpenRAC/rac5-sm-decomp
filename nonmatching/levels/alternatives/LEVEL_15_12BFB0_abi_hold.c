/* LEVEL_15.REL:0x12BFB0: reviewed 88-byte candidate, held for ABI review.
 * Masks a state word, then runs two helpers on a stack record.
 * pinned C with gnu-ee-trial links 88/88 bytes and is byte-exact at this and 1
 * other USA placement, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_15_1150E8.c declares it returning int with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
extern char D_0012B840[];
void func_07A808(unsigned int *record, unsigned int mode, unsigned int tab, int n, int a4, int a5, unsigned int a6);
void func_07A9E0(void *rec);

void func_12BFB0(unsigned int a0)
{
    unsigned int rec[4];

    a0 = (a0 & 0xFFFFFFC3) | 4;
    func_07A808(rec, a0 & 0xFFFFFFFC, (unsigned int)D_0012B840, 44, 0, -1, 0);
    func_07A9E0(rec);
}
