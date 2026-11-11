/* LEVEL_02:0x0B9808 -- stores the value in one slot of the table. */
typedef struct {
    char pad[0x14];
    float f_14;
    char pad2[0x20 - 0x18];
} Slot;

extern Slot D_33EF18[];

void func_0B9808(int index, float v)
{
    D_33EF18[index].f_14 = v;
}
