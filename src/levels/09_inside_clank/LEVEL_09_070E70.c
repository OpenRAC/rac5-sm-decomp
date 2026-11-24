/* LEVEL_09.REL:0x070E70 -- looks up entry a1 of the 16 byte table at
   0x00202958 and forwards its hit class and damage to func_070CB8,
   behind the caller's own pointer arguments and float.  The index is
   materialised once in a local pointer: two array subscripts make the
   compiler copy the sum through a scratch register. */
typedef struct {
    unsigned char pad0[4];
    float damage;
    unsigned char pad1[4];
    int hitClass;
} DamageInfo;

/* The attack damage table: 259 entries of 16 bytes (kind, damage, element, hit class). */
extern DamageInfo D_00202958[];

extern void func_070CB8(void *a0, void *a1, void *a2, int a3, float a4,
                        float a5);

void func_070E70(void *a0, int a1, void *a2, void *a3, float a4)
{
    DamageInfo *e = &D_00202958[a1];

    func_070CB8(a0, a2, a3, e->hitClass, e->damage, a4);
}
