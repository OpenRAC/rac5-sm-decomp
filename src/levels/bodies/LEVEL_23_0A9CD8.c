/* LEVEL_23:0x0A9CD8 -- stores the angle into the field at +0x14 of the
   indexed 0x20-byte element. */
typedef struct {
    char pad_00[0x14];
    float f_14;
    char pad_18[0x08];
} E;

extern E D_002F8E68[];

void func_0A9CD8(int i, float f)
{
    D_002F8E68[i].f_14 = f;
}
