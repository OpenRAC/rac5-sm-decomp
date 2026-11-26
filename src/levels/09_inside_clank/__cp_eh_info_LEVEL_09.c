/* LEVEL_09:0x1D62D0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1D53C8(void);

int __cp_eh_info(void)
{
    return *func_1D53C8();
}
