/* USA LEVEL_01.REL:0x020CE0, 208-byte candidate (21 November 2026).
 * Measured gnu-ee-trial: 10 differing words; first difference at 0x30.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x14];
    int w14;
} Rec;

extern int D_00206D9C;
extern int func_1161A0(float *f, Rec *r, char *p, int a, int b, int c);
extern int func_020DB0(int a0, Rec *r, int a2, int a3, int a4, int a5, int a6, float f);

int func_020CE0(int a0, Rec *r, int a2, int a3, int a4, int a5, int a6, float f)
{
    int hit = 0;

    if (func_1161A0(&f, r, (char *)r + 0xC, a2, a3, D_00206D9C) != 0) {
        hit = 1;
        r->w14 = hit;
    }
    return (func_020DB0(a0, r, a2, a3, a4, a5, a6, f) != 0) | hit;
}
