/* LEVEL_21:0x140310 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_0015E3D8;

int __get_dynamic_handler_chain(void)
{
    return D_0015E3D8() + 4;
}
