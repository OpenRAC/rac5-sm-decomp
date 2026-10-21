/* LEVEL_15:0x0E88C0 -- after a call, clears six float fields of a record and
   sets a seventh one to 1.0f. */
typedef struct {
    char pad0[0xC];
    float f0C;
    char pad1[0xC];
    float f1C;
    char pad2[0xC];
    float f2C;
    float f30;
    float f34;
    float f38;
    float f3C;
} Rec;

extern void func_0E8C80(void);

void func_0E88C0(Rec *p)
{
    float zero;
    float one;

    func_0E8C80();
    zero = 0.0f;
    one = 1.0f;
    p->f38 = zero;
    p->f34 = zero;
    p->f30 = zero;
    p->f2C = zero;
    p->f1C = zero;
    p->f0C = zero;
    p->f3C = one;
}
