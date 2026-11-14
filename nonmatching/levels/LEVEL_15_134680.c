/* USA LEVEL_15.REL:0x134680, 152-byte candidate (14 November 2026).
 * Measured pinned: 14 differing words; first difference at 0x44.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Tgt { char p0[8]; float f08; };
struct Hd { char p0[0x48]; struct Tgt *f48; };
struct G { struct Hd *f00; char p1[0x13C - 4]; void *f13C; int f140; float f144; };
struct Rec { float f00; int f04; float f08; };

extern struct G D_002F4F88;
extern struct Rec D_00171AF0[];
extern void func_0619E8(void *a, void *b, int c, int d, float e, float f);

void func_134680(void *a0, float x, float y)
{
    float v;

    func_0619E8(D_002F4F88.f00, a0, 0, 1, y, x);
    D_002F4F88.f13C = a0;
    v = D_00171AF0[(int)a0].f00;
    D_002F4F88.f00->f48->f08 = v;
    D_002F4F88.f144 = D_00171AF0[(int)a0].f08;
    D_002F4F88.f140 = D_00171AF0[(int)a0].f04;
}
