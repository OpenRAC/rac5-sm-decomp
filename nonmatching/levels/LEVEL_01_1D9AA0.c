/* LEVEL_01.REL:0x1D9AA0: reviewed 148-byte candidate, held for ABI review.
 * Seeds a global handle once from a packed config word, then stores a second
 * helper result.
 * pinned C with gnu-ee-trial links 148/148 bytes and is byte-exact at this and
 * 12 other USA placements, but the prototypes disagree.
 * It declares func_1D1638 returning int with (int, pointer, pointer, pointer),
 * but the accepted LEVEL_01_1D1638.c defines it returning void with (long
 * long, long long, long long, long long).
 * Retry: reconcile the prototype with the accepted definition and callers
 * (argument count, types and return use), then relink every placement and
 * rerun the complete-module gate.
 * No matching credit.
 */
struct Cfg1D9AA0 {
    char pad_00[0xB8];
    unsigned int w_B8;
    char pad_BC[0x70];
    unsigned int w_12C;
};

extern struct Cfg1D9AA0 D_00297DC0;
extern int D_00209644;
extern unsigned int D_00209640;
extern char D_00209610[];
extern char D_00209630[];
extern char D_001D9B80[];
unsigned int func_1D1638(unsigned int a, char *b, char *c, char *d);
unsigned int func_0E31C8(unsigned int a);

void func_1D9AA0(void)
{
    if (D_00209644 == -1) {
        D_00209644 = func_1D1638((D_00297DC0.w_12C << 16) | 0x80007059u, D_00209610, D_00209630, D_001D9B80);
    }
    D_00209640 = func_0E31C8((D_00297DC0.w_B8 << 16) | 0x800070D9u);
}
