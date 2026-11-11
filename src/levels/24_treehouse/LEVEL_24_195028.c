/* LEVEL_24:0x195028 -- placement copy of LEVEL_04_1C6400.c: converts the eight entries of the source table through the lookup helper into the destination table, then runs the two follow-up helpers. */
extern unsigned int D_001F4A00[];
extern int D_00362248[];
extern int func_11FB68(unsigned int value);
extern void func_0E7358(int index);
extern void func_06F990(void);

void func_195028(void)
{
    unsigned int i;

    for (i = 0; i < 8; i++)
        D_00362248[i] = func_11FB68(D_001F4A00[i]);
    func_0E7358(0x17);
    func_06F990();
}
