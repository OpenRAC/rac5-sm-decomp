/* LEVEL_03.REL:001468 -- copies the float at 0xF8 of the object held by
   D_002078C8 into its field at 0xFC. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
    float f_FC;
} Obj;

extern Obj *D_002078C8;

void func_001468(void)
{
    D_002078C8->f_FC = D_002078C8->f_F8;
}
