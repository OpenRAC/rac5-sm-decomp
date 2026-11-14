/* LEVEL_10:0x1579D8 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_0039CDC0[];

extern void func_1D12B0(void *table, void *p);

int func_1579D8(void *p)
{
    func_1D12B0(D_0039CDC0, p);
    return 1;
}
