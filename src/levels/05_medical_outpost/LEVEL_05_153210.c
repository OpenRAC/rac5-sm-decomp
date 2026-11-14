/* LEVEL_05:0x153210 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_0037F858[];

extern void func_1BC418(void *table, void *p);

int func_153210(void *p)
{
    func_1BC418(D_0037F858, p);
    return 1;
}
