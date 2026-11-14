/* LEVEL_07:0x1FF8B0 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_0021E6C8)(void);

int __get_eh_context(void)
{
    return D_0021E6C8();
}
