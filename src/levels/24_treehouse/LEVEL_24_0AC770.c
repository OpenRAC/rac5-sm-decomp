/* LEVEL.REL:0AC770 -- stores the angle at 0x14 of the
   0x20-byte entry D_002F38D8[a0]. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x8];
} Elem;

extern Elem D_002F38D8[];

void func_0AC770(int a0, float a1)
{
    D_002F38D8[a0].f_14 = a1;
}
