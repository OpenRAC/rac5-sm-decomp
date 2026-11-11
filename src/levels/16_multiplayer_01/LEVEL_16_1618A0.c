/* LEVEL_16.REL:1618A0 -- sets the float at 0xA0 of the record at 0x58 of
   the object to one half. */
typedef struct {
    char pad_00[0xA0];
    float f_A0;
} Rec;

typedef struct {
    char pad_00[0x58];
    Rec *f_58;
} Obj;

void func_1618A0(Obj *a0)
{
    a0->f_58->f_A0 = 0.5f;
}
