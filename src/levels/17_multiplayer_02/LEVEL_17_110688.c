/* LEVEL_17:0x110688 -- placement copy of LEVEL_01_1343A0.c: tells whether slot number i (0..7) of the 0x824-byte record table has a nonzero first word. */
typedef struct {
    int w0;
    char pad04[0x824 - 4];
} Slot;

extern Slot D_002CDFD0[];

int func_110688(unsigned int i)
{
    if (i >= 8)
        return 0;
    return D_002CDFD0[i].w0 != 0;
}
