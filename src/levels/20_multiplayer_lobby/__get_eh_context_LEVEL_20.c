/* LEVEL_20:0x0F9708 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_0011FC40)(void);

int __get_eh_context(void)
{
    return D_0011FC40();
}
