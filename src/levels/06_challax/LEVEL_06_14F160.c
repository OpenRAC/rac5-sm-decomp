/* LEVEL_06:0x14F160 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_00380740[];

extern void func_1B9470(void *table, void *p);

int func_14F160(void *p)
{
    func_1B9470(D_00380740, p);
    return 1;
}
