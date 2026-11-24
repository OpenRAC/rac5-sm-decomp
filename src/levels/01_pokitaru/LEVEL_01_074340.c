/* LEVEL_01.REL @ 0x074340 — 60 octets, lwc1 */
typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_00218D58[];

void func_074188(int a0, int a1, int a2, int a3, float f12, float f13);

void func_074340(int a0, int a1, int a2, int a3, float f12)
{
    DamageInfo *e = &D_00218D58[a1];

    func_074188(a0, a2, a3, e->hitClass, e->damage, f12);
}
