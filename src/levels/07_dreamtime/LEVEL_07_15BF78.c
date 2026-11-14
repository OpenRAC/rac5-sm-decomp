/* LEVEL_07:0x15BF78 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_003A92F0[];

extern void func_1D95E8(void *table, void *p);

int func_15BF78(void *p)
{
    func_1D95E8(D_003A92F0, p);
    return 1;
}
