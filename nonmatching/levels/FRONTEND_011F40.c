/* FRONTEND.REL:0x011F40: 21 reviewed USA placements.
 * Ghidra body: 148 bytes; pinned C links 148 bytes and first differs at +2.
 * The 148-byte state machine differs in early mode and direction registers. Reopen with caller and field-type evidence before changing its branch layout.
 * This source has no matching credit.
 */
typedef struct {
    char pad_00[0x08];
    float f_08;
    float f_0C;
    float f_10;
    float f_14;
    float f_18;
    unsigned char b_1C;
    char pad_1D[0x3];
    int f_20;
    int f_24;
} Obj;

void func_011F40(Obj *a0)
{
    int mode = a0->f_20;
    int dir;
    int s;
    int n;
    float f0, f1, f2;

    if (mode == 1) {
        n = a0->f_24;
        if (n != 0) {
            n = n - 1;
            a0->f_24 = n;
            if (n == 0)
                a0->f_20 = 0;
        }
        return;
    }

    dir = a0->b_1C;
    f0 = a0->f_08;
    if (dir != 0) {
        f1 = a0->f_14;
        f2 = a0->f_10;
        f0 = f0 + f1;
        a0->f_08 = f0;
        if (f2 <= f0) {
            a0->f_08 = f2;
            s = 2;
        } else {
            goto tail;
        }
    } else {
        f1 = a0->f_18;
        f2 = a0->f_0C;
        f0 = f0 - f1;
        a0->f_08 = f0;
        if (f0 <= f2) {
            a0->f_08 = f2;
            s = 3;
        } else {
            goto tail;
        }
    }
    if (mode != s)
        a0->b_1C = dir ^ 1;
tail:
    n = a0->f_24;
    if (n != 0) {
        n = n - 1;
        a0->f_24 = n;
        if (n == 0)
            a0->f_20 = 0;
    }
}
