/* LEVEL_03:0x193D18 -- registers the record with the callback, the settings word packed into the high half of the tag, and fixed parameters. */
extern unsigned int D_002B2CC8;
extern void func_193948(void);
extern void func_096578(unsigned int *record, unsigned int first, unsigned int second, int third, int fourth, int fifth, unsigned int sixth);

void func_193D18(unsigned int *record)
{
    func_096578(record, (D_002B2CC8 << 16) | 0x800070D9U, (unsigned int)func_193948, 0x18, 0, -1, 0);
}
