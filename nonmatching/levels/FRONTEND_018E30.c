/* USA FRONTEND.REL:0x018E30, 72-byte candidate (14 November 2026).
 * Measured pinned: 3 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct { char pad_00[0x3C]; int field; } Cur;

extern int D_00030424;
extern Cur *D_00027E9C;
extern void func_022938(void);
extern void func_0209E0(int a);
extern void func_020988(void);
extern void func_0211B0(int a);
extern void func_020E48(int a);

void func_018E30(void)
{
    func_022938();
    func_0209E0(0);
    func_020988();
    func_0211B0(D_00030424);
    func_020E48(D_00027E9C->field);
}
