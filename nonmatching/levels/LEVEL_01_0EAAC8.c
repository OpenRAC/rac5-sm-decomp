/* LEVEL_01.REL:0x0EAAC8: reviewed 104-byte candidate, held for ABI review.
 * Merges a looked-up word, shifted into the high half, into a record's second
 * word and forwards the record to a helper.
 * pinned C with gnu-ee-trial links 104/104 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It defines the function returning void with (int), but the accepted caller
 * LEVEL_01_0EAB30.c declares it returning void with no arguments.
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Rec {
    int w_00;
    int w_04;
    char pad_08[0xA0 - 0x08];
};

extern char D_00206918[];
extern int D_00297DC0[];
void func_104BA0(char *a0, int a1);

void func_0EAAC8(int a0)
{
    unsigned int w;
    struct Rec *r;
    int *tbl;

    tbl = D_00297DC0;
    r = (struct Rec *)(D_00206918 + a0 * 0xA0);
    w = (unsigned int)r->w_04 & 0xF800FFFFU;
    w |= (unsigned int)(tbl[r->w_00] << 16);
    r->w_04 = w;
    func_104BA0((char *)r + 8, 2);
}
