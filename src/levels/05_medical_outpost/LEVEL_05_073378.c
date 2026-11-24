/* LEVEL_05:073378 -- forwards the a1-th entry of the table D_00207C58 to
   func_0731C0: two floats (its damage and the incoming one)
   and four words, the last its hit class. */
typedef struct {
    int pad_00;
    float damage;
    int pad_08;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_00207C58[];

void func_0731C0(int a0, int a1, float f12, float f13, int a2, int a3);

void func_073378(int a0, int a1, float x, int a2, int a3)
{
    DamageInfo *e = &D_00207C58[a1];
    func_0731C0(a0, a2, e->damage, x, a3, e->hitClass);
}
