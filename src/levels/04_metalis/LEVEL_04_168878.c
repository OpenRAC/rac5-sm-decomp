/* LEVEL_04:0x168878 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_003AE298[];

extern void func_1E0838(void *table, void *p);

int func_168878(void *p)
{
    func_1E0838(D_003AE298, p);
    return 1;
}
