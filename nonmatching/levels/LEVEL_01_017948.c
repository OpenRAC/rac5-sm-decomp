/* USA LEVEL_01.REL:0x017948, 320-byte candidate (21 November 2026).
 * Measured pinned: 19 differing words; first difference at 0xFC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float f00;
    char pad04[0x10];
    float f14;
    char pad18[0x10];
    float f28;
    char pad2C[0x10];
    float f3C;
} Rec;

extern unsigned char D_0022FB30;
extern int D_0022F880;
extern int D_0022F884;
extern Rec D_0022F8B0;
extern Rec D_0022F8F0[8];

extern void func_019618(void);
extern void func_0172D8(void);
extern void func_087E58(int a);
extern void func_087DE8(int a);

void func_017948(void)
{
    unsigned i;
    unsigned j;

    D_0022FB30 = 0;
    D_0022F880 = 0;
    D_0022F884 = 0;
    func_019618();
    func_0172D8();
    D_0022F8B0.f00 = 0.01f;
    D_0022F8B0.f14 = 0.01f;
    D_0022F8B0.f28 = 0.01f;
    D_0022F8B0.f3C = 1.0f;
    for (i = 0; i < 8; i++) {
        D_0022F8F0[i] = D_0022F8B0;
    }
    for (j = 0; j < 2; j++) {
        func_087E58(j);
        func_087DE8(2);
    }
    func_087E58(0);
}
