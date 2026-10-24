/* LEVEL_22:0A1578 -- stores the float argument at 0x14 of the a0-th record of
   the D_0027D5E8 table (stride 0x20). */
typedef struct {
    char pad_14[0x14];
    float f_14;
    char pad_18[8];
} Entry;

extern Entry D_0027D5E8[];

void func_0A1578(int a0, float x)
{
    D_0027D5E8[a0].f_14 = x;
}
