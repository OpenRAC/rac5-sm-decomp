/* LEVEL_15:0x141160 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_140258(void);

int __cp_eh_info(void)
{
    return *func_140258();
}
