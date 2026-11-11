/* LEVEL_17:0x18A700 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_001B1F08;

int __get_dynamic_handler_chain(void)
{
    return D_001B1F08() + 4;
}
