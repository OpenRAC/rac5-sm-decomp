/* LEVEL_05.REL:0x09F130 -- parks the two float arguments at +0x8 and +0xC of
   the record at 0x001E5A90 and raises the separate byte at 0x001E5AA0. */
typedef struct {
    unsigned char pad0[8];
    float a_8;
    float b_C;
} Rec;

extern Rec D_001E5A90;
extern unsigned char D_001E5AA0;

void func_09F130(float x, float y)
{
    D_001E5AA0 = 1;
    D_001E5A90.a_8 = x;
    D_001E5A90.b_C = y;
}
