/* LEVEL_18:0x10E9F8 -- placement copy of FRONTEND_020948.c: keeps only the masked bits of the object's field 0x94. */
extern int *D_01B5FDC;

void func_10E9F8(void)
{
    int *p = D_01B5FDC;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
