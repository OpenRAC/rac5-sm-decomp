/* LEVEL_03:0x203BC8 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_002228C0)(void);

int __get_eh_context(void)
{
    return D_002228C0();
}
