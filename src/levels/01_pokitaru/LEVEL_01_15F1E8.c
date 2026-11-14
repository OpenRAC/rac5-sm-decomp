/* LEVEL_01:0x15F1E8 -- forwards the object to the shared handler with the fixed table and reports success. */
extern char D_00393B18[];

extern void func_1CD008(void *table, void *p);

int func_15F1E8(void *p)
{
    func_1CD008(D_00393B18, p);
    return 1;
}
