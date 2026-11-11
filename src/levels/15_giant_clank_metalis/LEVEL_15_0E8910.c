/* LEVEL_15:0x0E8910 -- after a call, clears three float fields of a record. */
typedef struct {
    char pad[0x24];
    float f24;
    float f28;
    float f2C;
} Rec;

extern void func_0E8D38(float *m, float *q);

void func_0E8910(Rec *p, float *q)
{
    float zero;

    func_0E8D38((float *)p, q);
    zero = 0.0f;
    p->f2C = zero;
    p->f28 = zero;
    p->f24 = zero;
}
