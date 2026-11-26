/* LEVEL_02:0x201100 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_2001F8(void);

int __cp_eh_info(void)
{
    return *func_2001F8();
}
