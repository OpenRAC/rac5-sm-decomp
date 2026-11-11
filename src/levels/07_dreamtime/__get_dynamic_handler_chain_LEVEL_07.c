/* LEVEL_07:0x1FF990 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_0021E6C8;

int __get_dynamic_handler_chain(void)
{
    return D_0021E6C8() + 4;
}
