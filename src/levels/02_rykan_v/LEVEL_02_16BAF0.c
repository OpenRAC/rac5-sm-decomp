/* LEVEL_02:0x16BAF0 -- looks up a byte in the table of four-byte entries by the object's one-based index. */
extern unsigned char D_00234D18[];

unsigned char func_16BAF0(char *object)
{
    return D_00234D18[(*(unsigned char *)(object + 0x45) - 1) * 4];
}
