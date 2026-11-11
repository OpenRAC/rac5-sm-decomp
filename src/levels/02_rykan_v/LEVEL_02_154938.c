/* LEVEL_02:0x154938 -- placement copy of LEVEL_01_14E0C0.c: forwards the record referenced by the object's data block to the record handler. */
extern void func_087408(char *record);

void func_154938(char *item)
{
    func_087408(*(char **)(*(char **)(item + 0x58) + 0x44));
}
