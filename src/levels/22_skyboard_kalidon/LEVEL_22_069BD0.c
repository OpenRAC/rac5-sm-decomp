/* LEVEL_22.REL @ 0x069BD0 — 60 octets, lwc1 */
typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_001761D8[];

void func_069A18(int a0, int a1, int a2, int a3, float f12, float f13);

void func_069BD0(int a0, int a1, int a2, int a3, float f12)
{
    DamageInfo *e = &D_001761D8[a1];

    func_069A18(a0, a2, a3, e->hitClass, e->damage, f12);
}
