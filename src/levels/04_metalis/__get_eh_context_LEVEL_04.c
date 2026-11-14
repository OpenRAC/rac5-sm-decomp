/* LEVEL_04:0x2046F8 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_00223300)(void);

int __get_eh_context(void)
{
    return D_00223300();
}
