/* LEVEL_20.REL:0x03EB30 -- hands the node's sub-record and its distance to
   func_03EAD0. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Node;

extern void func_03EAD0(Node *, char *, float);

void func_03EB30(Node *a0)
{
    func_03EAD0(a0, (char *)a0 + 0x200, a0->f_23C);
}
