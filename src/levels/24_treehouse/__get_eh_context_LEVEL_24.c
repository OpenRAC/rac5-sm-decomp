/* LEVEL_24:0x1BC210 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_001DA830)(void);

int __get_eh_context(void)
{
    return D_001DA830();
}
