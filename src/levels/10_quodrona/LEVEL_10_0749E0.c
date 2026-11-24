typedef struct {
    int kind;
    float damage;
    int element;
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_00221CE8[];

extern void func_074828(void *a0, int a1, int a2, int a3, float a4,
                        float a5);

void func_0749E0(void *a0, int a1, int a2, int a3, float v)
{
    DamageInfo *e = &D_00221CE8[a1];

    func_074828(a0, a2, a3, e->hitClass, e->damage, v);
}
