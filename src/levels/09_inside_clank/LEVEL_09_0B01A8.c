/* LEVEL_09:0x0B01A8 -- stores the argument in the indexed record's field. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x08];
} Ent;

extern Ent D_0030F198[];

void func_0B01A8(int a0, float x)
{
    D_0030F198[a0].f_14 = x;
}
