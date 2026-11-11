/* LEVEL_05:0x003B48 -- stores one field of the current context. */
typedef struct {
    char pad[0x154];
    float f_154;
} Obj;

extern Obj *D_1DE5D4;

void func_003B48(float v)
{
    D_1DE5D4->f_154 = v;
}
