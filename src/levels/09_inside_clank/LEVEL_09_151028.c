/* LEVEL_09:0x151028 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_0037B130[];

extern void func_1B3528(void *table, void *p);

int func_151028(void *p)
{
    func_1B3528(D_0037B130, p);
    return 1;
}
