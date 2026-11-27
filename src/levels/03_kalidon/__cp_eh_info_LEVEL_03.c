/* LEVEL_03:0x204AF8 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_203BF0(void);

int __cp_eh_info(void)
{
    return *func_203BF0();
}
