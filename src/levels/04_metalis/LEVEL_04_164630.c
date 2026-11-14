/* LEVEL_04:0x164630 -- registers the object with its first linked record, then runs the follow-up helper. */
extern void func_1D4E30(void *a0, int a1);
extern void func_1DD360(void *a0);

void func_164630(char *record)
{
    func_1D4E30(**(void ***)(record + 0x54), (int)record);
    func_1DD360(record);
}
