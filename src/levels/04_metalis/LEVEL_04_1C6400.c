/* LEVEL_04:0x1C6400 -- converts the eight entries of the source table through the lookup helper into the destination table, then runs the two follow-up helpers. */
extern unsigned int D_002416A0[];
extern int D_003B3920[];
extern int func_1364E8(unsigned int value);
extern void func_0F6C80(int index);
extern void func_077F30(void);

void func_1C6400(void)
{
    unsigned int i;

    for (i = 0; i < 8; i++)
        D_003B3920[i] = func_1364E8(D_002416A0[i]);
    func_0F6C80(0x17);
    func_077F30();
}
