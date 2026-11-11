/* FRONTEND:0x0033A0 -- placement copy of LEVEL_01_0276F0.c. */
extern unsigned char *D_00027E9C;

unsigned char func_0033A0(unsigned int index)
{
    if (index >= 100)
        return 0;
    return (*(D_00027E9C + index + 0x1b60) >> 1) & 1u;
}
