/* LEVEL_24:0x1732D8 -- calls a spawn helper with slot 0 and the position stored at offset 0x30 of an object. */
extern void func_0E7540(unsigned int index, float *pos);

void func_1732D8(char *o)
{
    func_0E7540(0, (float *)(o + 0x30));
}
