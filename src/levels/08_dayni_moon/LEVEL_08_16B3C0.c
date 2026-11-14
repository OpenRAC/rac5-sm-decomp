/* LEVEL_08:0x16B3C0 -- placement copy of LEVEL_04_164630.c: registers the object with its first linked record, then runs the follow-up helper. */
extern void func_1F9DB0(void *a0, int a1);
extern void func_2042D8(void *a0);

void func_16B3C0(char *record)
{
    func_1F9DB0(**(void ***)(record + 0x54), (int)record);
    func_2042D8(record);
}
