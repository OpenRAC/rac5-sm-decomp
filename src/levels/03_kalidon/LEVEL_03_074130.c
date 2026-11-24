/* LEVEL_03:0x074130 -- table-driven forwarder: the indexed damage entry gives
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
extern DamageInfo D_00231C58[];

void func_073F78(void *, void *, void *, int, float, float);

void func_074130(int a0, int a1, void *a2, void *a3, float a4)
{
    DamageInfo *r = D_00231C58 + a1;

    func_073F78(a0, a2, a3, r->hitClass, r->damage, a4);
}
