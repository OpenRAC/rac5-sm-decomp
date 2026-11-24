/* LEVEL_02:0x07AC28 -- forwards a damage entry's damage and hit class to func_07AA70. */
typedef struct {
    char pad_00[0x04];
    float damage;
    char pad_08[0x04];
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern char D_0022DCD8[];

extern void func_07AA70(int a0, int a1, int a2, int a3, float f12, float f13);

void func_07AC28(int a0, int a1, int a2, int a3, float x)
{
    DamageInfo *e = (DamageInfo *)(a1 * 16 + (int)D_0022DCD8);
    int w = e->hitClass;
    float f = e->damage;

    func_07AA70(a0, a2, a3, w, f, x);
}
