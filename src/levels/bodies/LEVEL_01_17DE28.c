/* LEVEL_01:0x17DE28 -- writes the two constants and clears a word. */
typedef struct {
    char pad_00[0xE8];
    float f_E8;
    int f_EC;
    char pad_F0[0x24];
    float f_114;
} Rec;

void func_17DE28(Rec *a0)
{
    a0->f_114 = 0.001f;
    a0->f_E8 = 8.0f;
    a0->f_EC = 0;
}
