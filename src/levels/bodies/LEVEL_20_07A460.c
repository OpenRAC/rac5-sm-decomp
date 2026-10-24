/* LEVEL_20.REL:0x07A460 -- arms the byte at 0x00106DD0 and parks the two float
   arguments at 0x00106DC0 and +0x4 of it; the pair is one record, so the
   compiler keeps the full address in $a0 and stores the second at +0x4. */
typedef struct {
    float a;
    float b;
} Rec;

extern Rec D_00106DC0;
extern unsigned char D_00106DD0;

void func_07A460(float a, float b)
{
    D_00106DD0 = 1;
    D_00106DC0.a = a;
    D_00106DC0.b = b;
}
