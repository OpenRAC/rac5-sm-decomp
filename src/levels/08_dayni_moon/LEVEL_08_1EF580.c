/* LEVEL_08:0x1EF580 -- placement copy of LEVEL_04_1C6400.c: converts the eight entries of the source table through the lookup helper into the destination table, then runs the two follow-up helpers. */
extern unsigned int D_00275D60[];
extern int D_003EAA68[];
extern int func_13B5A0(unsigned int value);
extern void func_0FB190(int index);
extern void func_07CAB0(void);

void func_1EF580(void)
{
    unsigned int i;

    for (i = 0; i < 8; i++)
        D_003EAA68[i] = func_13B5A0(D_00275D60[i]);
    func_0FB190(0x17);
    func_07CAB0();
}
