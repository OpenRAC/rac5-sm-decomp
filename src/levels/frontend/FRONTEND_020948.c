/* FRONTEND:0x020948 -- keeps only the masked bits of the object's field 0x94. */
extern int *D_0032814;

void func_020948(void)
{
    int *p = D_0032814;

    p[0x25] &= (0xFFFB0000 | 0xFFFF);
}
