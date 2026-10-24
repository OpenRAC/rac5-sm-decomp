/* LEVEL_08.REL:0x073118 -- shifts the three integer arguments and hands the node's
   value to func_073148. */
typedef struct {
    char pad_00[0x1F8];
    float f_1F8;
} Node;

extern void func_073148(int, int, int, int, float);

void func_073118(Node *a0, int a1, int a2, int a3)
{
    func_073148(a1, a2, a3, 0, a0->f_1F8);
}
