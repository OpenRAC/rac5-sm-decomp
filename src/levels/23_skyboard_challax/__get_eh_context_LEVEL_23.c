/* LEVEL_23:0x1BE978 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001DCC58)(void);

int __get_eh_context(void)
{
    return D_001DCC58();
}
