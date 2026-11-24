/* LEVEL_06.REL @ 0x070210 — 60 octets, lwc1 */
typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_00207BD8[];

void func_070058(int a0, int a1, int a2, int a3, float f12, float f13);

void func_070210(int a0, int a1, int a2, int a3, float f12)
{
    DamageInfo *e = &D_00207BD8[a1];

    func_070058(a0, a2, a3, e->hitClass, e->damage, f12);
}
