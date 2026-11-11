/* LEVEL_15:0x000CF8 -- stores the two float arguments into the object
   reached through the pointer member of the global D_143EB0 (fields
   0x10C and 0x110).  The float store may alias the pointer member, so
   the compiler reloads it before the second store. */
typedef struct {
    char pad_00[0x10C];
    float f_10C;
    float f_110;
} Obj;

typedef struct {
    Obj *ptr;
} Holder;

extern Holder D_143EB0;

void func_000CF8(float a0, float a1)
{
    D_143EB0.ptr->f_10C = a0;
    D_143EB0.ptr->f_110 = a1;
}
