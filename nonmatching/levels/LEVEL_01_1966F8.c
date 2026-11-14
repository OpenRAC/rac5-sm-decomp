/* USA LEVEL_01.REL:0x1966F8, 200-byte candidate (14 November 2026).
 * Measured pinned: 18 differing words; first difference at 4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad000[0x168];
    unsigned int f168;
    char pad16C[0x1FC - 0x16C];
    unsigned int f1FC;
    unsigned int f200;
} Block;

extern Block D_00297DC0;
extern unsigned int D_002087AC;
extern unsigned int D_002087B0;
extern int D_002087B4;
extern int D_002087B8;
extern int D_002087BC;
extern char D_00208830[];
extern char D_00209280[];

extern int func_1D7098(long long first, long long second, long long third, long long fourth);
extern void func_1E1D28(int *out1, unsigned int flags, int *out2, int a, int b);
extern void func_0EF748(int index);

void func_1966F8(void)
{
    Block *b = &D_00297DC0;

    D_002087AC = (D_002087AC & 0xF800FFFFu) | (b->f168 << 16);
    D_002087B0 = (D_002087B0 & 0xF800FFFFu) | (b->f200 << 16);
    D_002087BC = func_1D7098((int)((b->f1FC << 16) | 0x800060D9u), (long long)(int)D_00208830, (long long)(int)D_00209280, 0);
    func_1E1D28(&D_002087B4, D_002087AC, &D_002087B8, D_002087B0, 0);
    func_0EF748(7);
}
