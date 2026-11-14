/* LEVEL_17:0x18A620 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001B1F08)(void);

int __get_eh_context(void)
{
    return D_001B1F08();
}
