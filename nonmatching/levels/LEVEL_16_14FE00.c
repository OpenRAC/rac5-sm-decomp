/* USA LEVEL_16.REL:0x14FE00, 44-byte candidate (14 November 2026).
 * Measured pinned: 8 differing words; first difference at 0xC.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[0x70];
    float timer;
} Obj;

extern void func_14FE30(Obj *o);

void func_14FE00(Obj *o, float dt)
{
    o->timer += dt;
    func_14FE30(o);
}
