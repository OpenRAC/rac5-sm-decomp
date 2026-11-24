/* LEVEL_04:0x076900 -- table-driven forwarder: the indexed damage entry gives
   the callee's fourth integer argument (its hit class) and first float
   argument (its damage),
   the two pointers and the float of the caller follow. */
typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_002326D8[];

void func_076748(void *, void *, void *, int, float, float);

void func_076900(int a0, int a1, void *a2, void *a3, float a4)
{
    DamageInfo *r = D_002326D8 + a1;

    func_076748(a0, a2, a3, r->hitClass, r->damage, a4);
}
