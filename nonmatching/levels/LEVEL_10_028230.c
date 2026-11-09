/* LEVEL_10.REL:0x028230: reviewed 444-byte candidate, held for ABI review.
 * Saves a record block, runs a reset call and restores the block.
 * gnu-ee-trial-divpad-blockmove C with gnu-ee-trial links 444/444 bytes and is
 * byte-exact at this USA placement, but the prototypes disagree.
 * It declares func_0269A8 returning void with (pointer, int), but the held
 * byte-exact candidate LEVEL_10_0269A8.c defines it returning void with (int,
 * int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
typedef struct {
    int b[0x13];
} Blob;

typedef struct {
    char pad0[8];
    Blob blob;
} Rec;

extern Rec *D_001FCFAC;
extern unsigned char D_001FCE71;
extern void func_0269A8(Rec *r, int n);
extern void func_026D60(int a, int b, int c);

void func_028230(void)
{
    Blob saved;

    D_001FCE71 = 1;
    saved = D_001FCFAC->blob;
    func_0269A8(D_001FCFAC, 1);
    D_001FCFAC->blob = saved;
    func_026D60(0x92, 0xFF, 0xFF);
}
