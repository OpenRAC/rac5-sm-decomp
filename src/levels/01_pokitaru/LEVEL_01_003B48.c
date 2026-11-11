/* LEVEL_01:0x003B48 -- stores the argument in the current object's field. */
typedef struct {
    char pad[0x154];
    float f_154;
} Obj;

extern Obj *D_001EF254;

void func_003B48(float x)
{
    D_001EF254->f_154 = x;
}
