/* LEVEL_16:0x10FD48 -- placement copy of FRONTEND_020948.c: keeps only the masked bits of the object's field 0x94. */
extern int *D_01B4B5C;

void func_10FD48(void)
{
    int *p = D_01B4B5C;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
