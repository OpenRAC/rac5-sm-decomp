/* LEVEL_21:0x141138 -- placement copy of LEVEL_01_1EC440.c: returns the first word of the current exception record plus 8. */
extern int *func_140258(void);

int __cp_exception_info(void)
{
    return *func_140258() + 8;
}
