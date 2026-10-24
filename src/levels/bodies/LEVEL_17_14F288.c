/* LEVEL_17.REL:0x14F288 -- primes the +0x30 sub-record, refreshes the object,
   then parks state 6 on the object's +0x45 byte and a 10.0 timer, an on flag
   and a cleared flag on the +0x58 owner. */
typedef struct {
    unsigned char pad0[0x44];
    float v_44;
    unsigned char b_48;
    unsigned char b_49;
} Owner;

typedef struct {
    unsigned char pad0[0x45];
    unsigned char b_45;
    unsigned char pad1[0x12];
    Owner *p_58;
} Rec;

extern void func_0D9BB8(int a0, void *a1);
extern void func_016708(Rec *a0);

void func_14F288(Rec *a0)
{
    Owner *p = a0->p_58;

    func_0D9BB8(0, (unsigned char *)a0 + 0x30);
    func_016708(a0);
    a0->b_45 = 6;
    p->v_44 = 10.0f;
    p->b_49 = 1;
    p->b_48 = 0;
}
