/* LEVEL_04.REL:0x1E5838: reviewed 176-byte candidate, held for ABI review.
 * One-time setup of three global handles, then a conditional init call.
 * pinned C with gnu-ee-trial links 176/176 bytes and is byte-exact at this and
 * 1 other USA placement, but the prototypes disagree.
 * It declares func_109210 returning int with (int), but the accepted
 * LEVEL_04_109210.c defines it returning void with (int).
 * It declares func_1364E8 returning int with (int), but the accepted
 * LEVEL_04_1364E8.c defines it returning void with (int).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cfg {
    char pad_00[0x2C];
    unsigned int w_2c;
    char pad_30[0x9C];
    unsigned int w_cc;
};

extern struct Cfg D_002B25C0;
extern int D_00222858;
extern int D_0022285C;
extern int D_00222854;
extern char D_003B3EC8[];
extern char D_00244AE0[];
extern int func_109210(unsigned int a);
extern int func_1103F8(unsigned int a);
extern int func_1364E8(unsigned int a);
extern void func_136488(void *a, void *b, int c);

void func_1E5838(void)
{
    if (D_00222858 == -1) {
        D_00222858 = func_109210((D_002B25C0.w_cc << 16) | 0xC0001041);
        D_0022285C = func_1103F8((D_002B25C0.w_2c << 16) | 0xC00010C1);
    }
    if (D_00222854 == 0) {
        D_00222854 = func_1364E8(0x7108A363);
        func_136488(D_003B3EC8, D_00244AE0, 2);
    }
}
