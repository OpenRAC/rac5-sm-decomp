/* USA LEVEL_01.REL:0x134910, 224-byte candidate (21 November 2026).
 * Measured pinned: 9 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w00;
    int w04;
    int w08;
    int w0C;
    int w10;
    int w14;
} Rec;

extern Rec *D_00207094;
extern int D_0020709C;
extern unsigned int D_002070A0;
extern unsigned int func_11A288(int a);

void func_134910(void)
{
    Rec r;
    unsigned int res;
    int failed;

    D_002070A0 = 0xFFFFFFFF;
    r = *D_00207094;
    r.w00 = 0;
    res = func_11A288(D_00207094->w0C);
    D_002070A0 = res;
    if (res != 0xFFFFFFFF) {
        D_0020709C = 2;
        failed = 0;
    } else {
        failed = 1;
    }
    if (failed) {
        r.w00 = -1;
    }
    *D_00207094 = r;
}
