/* LEVEL_08:0x178498 -- clears the flag and arms the long timer for two states. */
typedef struct {
    char pad[0x16];
    char b_16;
} Sub;

typedef struct {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x12];
    Sub *p_58;
    char pad_5C[0x14];
    float f_70;
} Obj;

void func_178498(Obj *a0)
{
    a0->p_58->b_16 = 0;
    if ((unsigned)(a0->b_45 - 2) >= 2)
        a0->f_70 = 1800.0f;
}
