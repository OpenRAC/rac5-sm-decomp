/* LEVEL_15:0x0036B0 -- writes the two float arguments into the record
   pointed to by the pointer stored at 0x143EBC. */
typedef struct {
    char pad_00[0x164];
    float f_164;
    float f_168;
} Obj;

extern char D_00143EBC[];

void func_0036B0(float a0, float a1)
{
    (*(Obj **)D_00143EBC)->f_164 = a0;
    (*(Obj **)D_00143EBC)->f_168 = a1;
}
