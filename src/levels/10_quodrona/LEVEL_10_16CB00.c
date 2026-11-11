/* LEVEL_10.REL:0x16CB00 -- primes a stack scratch record through func_019938,
   stamps the global float into its +0x4 word and hands the record to
   func_16C2C8 with the caller's two pointers. */
typedef struct {
    unsigned char pad0[4];
    float v_4;
    unsigned char pad1[8];
} Tmp;

extern float D_0023E81C;

extern void func_019938(Tmp *t);
extern void func_16C2C8(void *a0, void *a1, Tmp *t);

void func_16CB00(void *a0, void *a1)
{
    Tmp t;

    func_019938(&t);
    t.v_4 = D_0023E81C;
    func_16C2C8(a0, a1, &t);
}
