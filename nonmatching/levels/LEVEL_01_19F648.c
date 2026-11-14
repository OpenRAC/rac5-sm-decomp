/* USA LEVEL_01.REL:0x19F648, 104-byte candidate (14 November 2026).
 * Measured pinned: 7 differing words; first difference at 0x1C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Src19F648 {
    char pad_00[0x34];
    unsigned int w_34;
    char pad_38[0x198];
    unsigned int w_1D0;
};

extern unsigned int D_00208A30;
extern unsigned int D_00208A8C;
extern unsigned int D_00208A90;
extern struct Src19F648 D_00297DC0;
extern unsigned int func_06E420(void);

void func_19F648(void)
{
    struct Src19F648 *s;
    unsigned int a;
    unsigned int b;
    unsigned int c;
    unsigned int d;

    s = &D_00297DC0;
    b = s->w_34;
    a = s->w_1D0;
    c = D_00208A8C;
    d = D_00208A90;
    D_00208A8C = (c & 0xF800FFFF) | (b << 16);
    D_00208A90 = (d & 0xF800FFFF) | (a << 16);
    D_00208A30 = func_06E420();
}
