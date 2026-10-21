/* LEVEL_02:0x191B18 -- returns the float at +0x18 of the sub-object
   reached through the pointer stored at +0x58 of the argument. */
typedef struct {
    char pad_00[0x18];
    float f_18;
} Sub;

typedef struct {
    char pad_00[0x58];
    Sub *sub;
} Rec;

float func_191B18(Rec *a0)
{
    return a0->sub->f_18;
}
