/* LEVEL_16:0x197F08 -- placement copy of LEVEL_01_1EC468.c: returns the first word of the current exception record. */
extern int *func_197000(void);

int __cp_eh_info(void)
{
    return *func_197000();
}
