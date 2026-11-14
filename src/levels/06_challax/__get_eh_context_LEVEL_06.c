/* LEVEL_06:0x1DA480 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001F88A0)(void);

int __get_eh_context(void)
{
    return D_001F88A0();
}
