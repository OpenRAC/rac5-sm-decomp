/* USA LEVEL_16.REL:0x1236D0, 200-byte candidate (14 November 2026).
 * Measured pinned: 11 differing words; first difference at 0x20.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Game {
    char pad0[0x180];
    int f180;
};

extern unsigned char D_001AAB04;
extern int D_001BC9C0;
extern unsigned char D_001BC9CA;
extern struct Game *D_001E00A8;
extern char D_002E1F38[];
extern unsigned int func_0795B8(int a0);
extern void func_0A50B0(int a0);
extern void func_0ABFA8(void);
extern void func_018C18(int a0, int a1);
extern void func_0A86F8(char *a0);

void func_1236D0(void)
{
    unsigned int pad;
    int one;

    D_001AAB04 = 0;
    pad = func_0795B8(0x6B10);
    if (D_001BC9C0 != 0) {
        if (D_001BC9C0 == 1) {
            func_0A50B0(7);
            func_0ABFA8();
        }
    } else if (pad & 0x1000) {
        func_0A50B0(0);
        D_001BC9C0 = 1;
    } else if ((pad & 0x2000) == 0) {
        if (pad & 0x4000) {
            one = 1;
            func_0A50B0(1);
            func_018C18(D_001E00A8->f180, 1);
            D_001BC9CA = one;
        } else {
            func_0A86F8(D_002E1F38);
        }
    }
}
