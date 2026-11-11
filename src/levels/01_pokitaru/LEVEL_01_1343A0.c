/* LEVEL_01:0x1343A0 -- tells whether slot number i (0..7) of the 0x824-byte record table has a nonzero first word. */
typedef struct {
    int w0;
    char pad04[0x824 - 4];
} Slot;

extern Slot D_0038EE30[];

int func_1343A0(unsigned int i)
{
    if (i >= 8)
        return 0;
    return D_0038EE30[i].w0 != 0;
}
