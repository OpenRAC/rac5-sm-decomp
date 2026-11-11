/* FRONTEND:0x005748 -- tests one bit of the argument against the mask
   held at offset 0x100 of the object pointed to by the global 0x2AD1C. */
extern int *D_0002AD1C;

int func_005748(int param_1)
{
    int *p = D_0002AD1C;
    int mask = p[64] | 1;

    return (param_1 & mask) != 0;
}
