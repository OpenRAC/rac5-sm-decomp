/* LEVEL_17:0x10F2C0 -- placement copy of FRONTEND_020948.c: keeps only the masked bits of the object's field 0x94. */
extern int *D_01A815C;

void func_10F2C0(void)
{
    int *p = D_01A815C;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
