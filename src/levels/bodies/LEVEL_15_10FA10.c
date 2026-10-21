/* LEVEL_15:0x10FA10 -- stores 1.0f / p->f00 into the slot at 0x18. */
typedef struct {
    float f[8];
} Rec;

void func_10FA10(Rec *p)
{
    p->f[6] = 1.0f / p->f[0];
}
