/* LEVEL_20:0x08BF58 -- stores the value in one slot of the table. */
typedef struct {
    char pad[0x14];
    float f_14;
    char pad2[0x20 - 0x18];
} Slot;

extern Slot D_199568[];

void func_08BF58(int index, float v)
{
    D_199568[index].f_14 = v;
}
