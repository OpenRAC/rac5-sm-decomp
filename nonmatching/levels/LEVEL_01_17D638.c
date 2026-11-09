/* LEVEL_01.REL:0x17D638: reviewed 208-byte candidate, held for ABI review.
 * Stores four packed-id lookup results into a table.
 * pinned C with gnu-ee-trial links 208/208 bytes and is byte-exact at this and
 * 11 other USA placements, but the prototypes disagree.
 * It declares func_1E6DB0 returning int with (int), but the accepted
 * LEVEL_01_1E6DB0.c defines it returning void with (pointer).
 * It declares func_1E7B48 returning int with (int), but the accepted
 * LEVEL_01_1E7B48.c defines it returning void with (pointer).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Src {
    unsigned int f0;
    char pad4[0x58];
    unsigned int f5C;
    char pad60[0x16C];
    unsigned int f1CC;
    char pad1D0[0xA4];
    unsigned int f274;
};
struct Dst {
    char pad0[0x3C];
    int r3C;
    int r40;
    int r44;
    int r48;
    int r4C;
};
extern struct Src D_00297DC0;
extern struct Dst D_00396AC0;
extern int func_17D7A8(void);
extern int func_1DFE40(unsigned int id, int (*cb)(void));
extern int func_0FE850(unsigned int id);
extern int func_1E6DB0(unsigned int id);
extern int func_1E7B48(unsigned int id);

void func_17D638(void)
{
    D_00396AC0.r3C = func_1DFE40((D_00297DC0.f274 << 16) | 0xA0001059, func_17D7A8);
    D_00396AC0.r40 = func_0FE850((D_00297DC0.f1CC << 16) | 0xC0001044);
    D_00396AC0.r44 = func_1E6DB0((D_00297DC0.f5C << 16) | 0xC0001045);
    D_00396AC0.r48 = func_1E6DB0((D_00297DC0.f0 << 16) | 0xB00010C5);
    D_00396AC0.r4C = func_1E7B48((D_00297DC0.f0 << 16) | 0xB8001044);
}
