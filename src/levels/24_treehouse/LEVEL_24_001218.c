/* LEVEL_24.REL:0x001218 -- stores the incoming value on the node, runs the level
   hook on it and forwards the hook's result. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
} Node;

extern Node *D_1BFEC8;
extern float func_0767B0(float);
extern float func_001260(float);

void func_001218(float a0)
{
    float r;

    D_1BFEC8->f_F8 = a0;
    r = func_0767B0(a0);
    func_001260(r);
}
