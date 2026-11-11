/* LEVEL_22.REL:0x001180 -- stores the incoming value on the node, runs the level
   hook on it and forwards the hook's result. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
} Node;

extern Node *D_14E5C8;
extern float func_06EBC0(float);
extern float func_0011C8(float);

void func_001180(float a0)
{
    float r;

    D_14E5C8->f_F8 = a0;
    r = func_06EBC0(a0);
    func_0011C8(r);
}
