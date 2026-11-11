/* LEVEL_16.REL:0x001008 -- stores the caller's factor in the current record
   and passes it through the two conversion routines. */
typedef struct {
    char pad0[0xF8];
    float f_F8;
} Rec;

extern Rec *D_0019ACCC;

float func_06F3A8(float v);
void func_001050(float v);

void func_001008(float v)
{
    D_0019ACCC->f_F8 = v;
    func_001050(func_06F3A8(v));
}
