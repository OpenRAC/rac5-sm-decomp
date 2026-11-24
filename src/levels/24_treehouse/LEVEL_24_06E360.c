/* LEVEL_24.REL:06E360 -- forwards the damage entry a1 (hit class and damage) to
   the shared routine, the caller's float going out as the second floating
   argument. */
typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_001E9AD8;

extern void func_06E1A8(int a0, int a1, int a2, int a3, float f1, float f2);

void func_06E360(int a0, int a1, int a2, int a3, float x)
{
    DamageInfo *p = &D_001E9AD8 + a1;

    func_06E1A8(a0, a2, a3, p->hitClass, p->damage, x);
}
