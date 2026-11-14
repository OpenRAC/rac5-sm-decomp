/* LEVEL_08:0x170300 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_003E2E40[];

extern void func_207E10(void *table, void *p);

int func_170300(void *p)
{
    func_207E10(D_003E2E40, p);
    return 1;
}
