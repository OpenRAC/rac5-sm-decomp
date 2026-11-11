/* LEVEL_05:0x0B14B8 -- stores the value in one slot of the table. */
typedef struct {
    char pad[0x14];
    float f_14;
    char pad2[0x20 - 0x18];
} Slot;

extern Slot D_3138D8[];

void func_0B14B8(int index, float v)
{
    D_3138D8[index].f_14 = v;
}
