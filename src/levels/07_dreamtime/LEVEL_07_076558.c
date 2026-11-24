typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_0022DA58[];

void func_0763A0(int a0, int a1, int a2, int a3, float f12, float f13);

void func_076558(int a0, int a1, int a2, int a3, float f12)
{
    DamageInfo *e = &D_0022DA58[a1];

    func_0763A0(a0, a2, a3, e->hitClass, e->damage, f12);
}
