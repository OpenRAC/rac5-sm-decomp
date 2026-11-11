/* 1B67D0 -- slot base in a local int pointer. */
typedef struct { char pad_00[0x68]; int i_68; char pad_6C[0x10]; int i_7C; } Sub;
typedef struct { char pad_00[0x58]; Sub *p_58; char pad_5C[0x14]; float f_70; } Obj;
void func_1B67D0(Obj *a0)
{
    Sub *s = a0->p_58;
    float t = a0->f_70 + 1.0f;
    int i;
    int *slot;

    a0->f_70 = t;
    if (!(t > 12.0f))
        return;
    i = s->i_7C;
    if ((unsigned)i >= 5)
        return;
    slot = (int *)((char *)s + i * 4);
    if (slot[0x1A] == 0)
        return;
    s->i_7C = i + 1;
    a0->f_70 = 0.0f;
}
