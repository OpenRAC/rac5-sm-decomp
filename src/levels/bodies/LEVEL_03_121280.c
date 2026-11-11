/* LEVEL_03:0x121280 -- placement copy of LEVEL_15_0E88C0.c: after a call, clears six float fields of a record and
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

extern void func_121730(float *m, float *q);

void func_121280(Rec *p, float *q)
{
    float zero;
    float one;

    func_121730((float *)p, q);
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
