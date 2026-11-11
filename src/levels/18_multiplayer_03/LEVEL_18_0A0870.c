/* LEVEL_18:0x0A0870 -- stores the angle into the field at +0x14 of the
   indexed 0x20-byte element. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x08];
} E;

extern E D_002760A8[];

void func_0A0870(int i, float f)
{
    D_002760A8[i].f_14 = f;
}
