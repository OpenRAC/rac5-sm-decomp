/* LEVEL_04:0x1C6CF8 -- returns the float at 0x04 of the object reached
   through the pointer member at 0x54, truncated to a byte. */
typedef struct {
    int pad_00;
    float f_04;
} Obj;

typedef struct {
    char pad_00[0x54];
    Obj *ptr;
} Rec;

unsigned char func_1C6CF8(Rec *a0)
{
    return (unsigned char)(int)a0->ptr->f_04;
}
