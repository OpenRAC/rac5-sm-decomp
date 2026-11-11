/* LEVEL_01.REL:0x080780 -- runs the node's own init and arms its timer. */
typedef struct {
    char pad_00[0x0C];
    float f_0C;
} Node;

extern void func_0807B0(int, Node *);

void func_080780(int a0, Node *a1)
{
    func_0807B0(a0, a1);
    a1->f_0C = 1.0f;
}
