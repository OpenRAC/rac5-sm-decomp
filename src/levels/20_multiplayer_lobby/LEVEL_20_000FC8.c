/* LEVEL_20.REL:0x000FC8 -- stores the incoming value on the node, runs the level
   hook and forwards its result. */
typedef struct {
    char pad_00[0xF8];
    float f_F8;
} Node;

extern Node *D_0FD3B4;
extern float func_05E3B0(float);
extern float func_001010(float);

void func_000FC8(float a0)
{
    float r;

    D_0FD3B4->f_F8 = a0;
    r = func_05E3B0(a0);
    func_001010(r);
}
