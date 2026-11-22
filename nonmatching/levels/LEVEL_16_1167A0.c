/* USA LEVEL_16.REL:0x1167A0, 276-byte candidate (21 November 2026).
 * Measured pinned: 30 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[8];
    float f08;
    char pad0C[0x40];
    unsigned char b4C;
    char pad4D[3];
    int w50;
    char pad54[4];
} Rec;

extern Rec D_002DFB78[2];
extern void func_116A60(void);

extern void func_000BF0(int i);
extern void func_001498(int i);
extern int func_112CE8(int i);
extern int func_05D640(int obj);
extern void *func_000D28(int a);
extern void func_116B50(int i);
extern void func_003480(int a, int b, float x, float y);
extern void func_003740(float x, float y);

void func_1167A0(void)
{
    unsigned int i;
    Rec *r;

    r = D_002DFB78;
    for (i = 0; i < 2; i++) {
        func_000BF0(i);
        func_001498(i);
        if (r->w50 == 0 && r->b4C != 0 && func_05D640(func_112CE8(i)) == 0) {
            if (func_000D28(0) != (void *)func_116A60) {
                func_116B50(i);
            }
            func_003480(20, 2, 0.4000000059604645f, 1.0f);
            func_003740(0.699999988079071f, 1.0f);
            r->f08 = 0.5497787594795227f;
        }
        r->b4C = 1;
        r++;
    }
}
