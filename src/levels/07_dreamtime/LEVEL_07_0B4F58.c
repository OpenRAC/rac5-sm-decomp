/* LEVEL_07:0x0B4F58 -- stores the argument in the indexed record's field. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x08];
} Ent;

extern Ent D_0033D318[];

void func_0B4F58(int a0, float x)
{
    D_0033D318[a0].f_14 = x;
}
