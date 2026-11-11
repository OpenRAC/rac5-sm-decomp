/* LEVEL_20:0x0E2B30 -- placement copy of FRONTEND_020948.c: keeps only the masked bits of the object's field 0x94. */
extern int *D_011721C;

void func_0E2B30(void)
{
    int *p = D_011721C;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
