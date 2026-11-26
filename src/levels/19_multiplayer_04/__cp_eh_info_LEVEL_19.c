/* LEVEL_19:0x1990D0 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_1981C8(void);

int __cp_eh_info(void)
{
    return *func_1981C8();
}
