/* USA LEVEL_01.REL:0x17AFD0, 216-byte candidate (21 November 2026).
 * Measured pinned: 13 differing words; first difference at 0x84.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad000[0x148];
    int w148;
    char pad14C[0x94];
    int w1E0;
    char pad1E4[0x40];
    int w224;
} Rec;

extern Rec D_00297DC0;
extern float D_00207A38;
extern float D_00207A34;
extern int D_00207A00;
extern unsigned int D_002079EC;

extern int func_100D88(unsigned int arg);
extern int func_06E420(unsigned int arg);
extern int func_0E31C8(unsigned int arg);
extern void func_0EF748(int mode, unsigned int word);

void func_17AFD0(void)
{
    unsigned int word;

    D_00207A38 = (float)func_100D88((D_00297DC0.w224 << 16) | 0x580074C1);
    D_00207A00 = func_06E420((D_00297DC0.w1E0 << 16) | 0x58006441);
    D_00207A34 = (float)func_0E31C8((D_00297DC0.w148 << 16) | 0xA00030C1);
    word = (D_002079EC & 0xF800FFFF) | (D_00297DC0.w1E0 << 16);
    D_002079EC = word;
    func_0EF748(2, word);
}
