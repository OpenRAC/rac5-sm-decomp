/* LEVEL_08.REL:0x07B458 -- relays to func_07B2A0 with the damage entry a1:
   its hit class and damage. */
typedef struct {
    char pad0[4];
    float damage;
    char pad1[4];
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_002629D8[];

void func_07B2A0(void *a0, int a1, int a2, int a3, float f0, float f1);

void func_07B458(void *a0, int a1, int a2, int a3, float f)
{
    DamageInfo *e = &D_002629D8[a1];

    func_07B2A0(a0, a2, a3, e->hitClass, e->damage, f);
}
