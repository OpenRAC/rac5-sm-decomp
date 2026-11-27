/* LEVEL_22:0x14B820 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_14A918(void);

int __cp_eh_info(void)
{
    return *func_14A918();
}
