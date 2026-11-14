/* LEVEL_21:0x140230 -- placement copy of LEVEL_01_1EB538.c: calls the function pointer stored in a global. */
extern int (*D_0015E3D8)(void);

int __get_eh_context(void)
{
    return D_0015E3D8();
}
