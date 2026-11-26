/* LEVEL_04:0x205628 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_204720(void);

int __cp_eh_info(void)
{
    return *func_204720();
}
