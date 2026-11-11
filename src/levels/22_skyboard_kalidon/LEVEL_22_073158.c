/* LEVEL_22.REL:0x073158 -- runs the node's own init and arms its timer. */
typedef struct {
    char pad_00[0x0C];
    float f_0C;
} Node;

extern void func_073188(int, Node *);

void func_073158(int a0, Node *a1)
{
    func_073188(a0, a1);
    a1->f_0C = 1.0f;
}
