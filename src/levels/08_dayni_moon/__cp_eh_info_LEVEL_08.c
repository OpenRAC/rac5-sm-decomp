/* LEVEL_08:0x234FF0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_2340E8(void);

int __cp_eh_info(void)
{
    return *func_2340E8();
}
