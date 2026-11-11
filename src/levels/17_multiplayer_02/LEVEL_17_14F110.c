/* LEVEL_17.REL:0x14F110 -- raises the busy flag of the sub-object once its
   reading passes three. */
typedef struct {
    char pad0[0x34];
    float f_34;
    char pad1[0x40 - 0x38];
    int f_40;
} Sub;

typedef struct {
    char pad0[0x58];
    Sub *p_58;
} Obj;

void func_14F110(Obj *a0)
{
    Sub *s = a0->p_58;

    if (s->f_34 > 3.0f)
        s->f_40 |= 4;
}
