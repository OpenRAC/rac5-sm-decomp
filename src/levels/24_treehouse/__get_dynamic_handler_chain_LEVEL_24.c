/* LEVEL_24:0x1BC2F0 -- placement copy of LEVEL_01_1EB618.c: calls the registered handler and returns its size plus 4. */
typedef int (*Handler)(void);

extern Handler D_001DA830;

int __get_dynamic_handler_chain(void)
{
    return D_001DA830() + 4;
}
