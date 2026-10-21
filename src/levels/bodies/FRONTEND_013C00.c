/* FRONTEND:0x013C00 -- tests a global counter for a non-zero value. */
extern unsigned int D_0003018C[];

int func_013C00(void)
{
    return D_0003018C[0] > 0;
}
