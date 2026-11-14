/* LEVEL_03:0x1586C8 -- placement copy of LEVEL_01_15F1E8.c: forwards the object to the shared handler with the fixed table and reports success. */
extern char D_003AE8B0[];

extern void func_1DDC28(void *table, void *p);

int func_1586C8(void *p)
{
    func_1DDC28(D_003AE8B0, p);
    return 1;
}
