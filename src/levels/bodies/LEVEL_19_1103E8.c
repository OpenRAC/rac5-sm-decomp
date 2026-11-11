/* LEVEL_19:0x1103E8 -- placement copy of FRONTEND_020948.c: keeps only the masked bits of the object's field 0x94. */
extern int *D_01B5CDC;

void func_1103E8(void)
{
    int *p = D_01B5CDC;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
