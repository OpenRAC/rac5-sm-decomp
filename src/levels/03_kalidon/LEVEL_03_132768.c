/* LEVEL_03:0x132768 -- placement copy of LEVEL_01_1343A0.c: tells whether slot number i (0..7) of the 0x824-byte record table has a nonzero first word. */
typedef struct {
    int w0;
    char pad04[0x824 - 4];
} Slot;

extern Slot D_003A9CB0[];

int func_132768(unsigned int i)
{
    if (i >= 8)
        return 0;
    return D_003A9CB0[i].w0 != 0;
}
