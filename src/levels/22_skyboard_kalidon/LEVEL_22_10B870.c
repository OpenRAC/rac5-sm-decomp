/* LEVEL_22:0x10B870 -- placement copy of LEVEL_01_1343A0.c: tells whether slot number i (0..7) of the 0x824-byte record table has a nonzero first word. */
typedef struct {
    int w0;
    char pad04[0x824 - 4];
} Slot;

extern Slot D_002E4910[];

int func_10B870(unsigned int i)
{
    if (i >= 8)
        return 0;
    return D_002E4910[i].w0 != 0;
}
