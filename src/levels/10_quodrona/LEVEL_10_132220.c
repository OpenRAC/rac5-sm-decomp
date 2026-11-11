/* LEVEL_10:0x132220 -- placement copy of LEVEL_01_1343A0.c: tells whether slot number i (0..7) of the 0x824-byte record table has a nonzero first word. */
typedef struct {
    int w0;
    char pad04[0x824 - 4];
} Slot;

extern Slot D_00398230[];

int func_132220(unsigned int i)
{
    if (i >= 8)
        return 0;
    return D_00398230[i].w0 != 0;
}
