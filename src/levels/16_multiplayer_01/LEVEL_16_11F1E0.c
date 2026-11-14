/* LEVEL_16:0x11F1E0 -- calls the helper with the global handle, the constant 0x20 and a fixed table. */
extern void *D_002E1650;
extern char D_001B92D8[];
extern void func_11E188(void *a, int b, void *c);

void func_11F1E0(void)
{
    func_11E188(D_002E1650, 0x20, D_001B92D8);
}
