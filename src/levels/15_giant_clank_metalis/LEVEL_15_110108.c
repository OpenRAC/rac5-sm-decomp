/* LEVEL_15:0x110108 -- resets the two float slot pairs at +0x274 and +0x2A4 of the record. */
extern void func_0FE8B8(void *a0);

void func_110108(char *record)
{
    func_0FE8B8(record + 0x274);
    func_0FE8B8(record + 0x2A4);
}
