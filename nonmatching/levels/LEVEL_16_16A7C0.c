/* USA LEVEL_16.REL:0x16A7C0, 152-byte candidate (14 November 2026).
 * Measured pinned: 7 differing words; first difference at 52.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
extern void *memset(void *p, int c, unsigned int n);

struct Obj {
    char pad0[0x45];
    unsigned char f45;
    unsigned char f46;
    char pad47[0x11];
    void *f58;
    char pad5C[0xC];
    unsigned int f68;
    char pad6C[0xB];
    unsigned char f77;
};

extern int D_001BE098;
extern unsigned char D_001BE09C;
extern int GLOBALWAD_FindGlobalSound__FUi(int a0) __asm__("GLOBALWAD_FindGlobalSound__FUi");

int func_16A7C0(struct Obj *o)
{
    o->f45 = 0;
    o->f46 = 3;
    memset(o->f58, 0, 0xC);
    o->f77 = 0x20;
    o->f68 = 0xFFFFFFFFu;
    if (D_001BE098 == 0) {
        D_001BE098 = GLOBALWAD_FindGlobalSound__FUi(0xBD506DCC);
        if (D_001BE098 == 0) {
            if (D_001BE09C == 0) {
                D_001BE09C = 1;
            }
        }
    }
    return 1;
}
