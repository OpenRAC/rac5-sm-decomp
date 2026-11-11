/* LEVEL_24.REL:0x041F30 -- hands the node's sub-record and its distance to
   func_041ED0. */
typedef struct {
    char pad_00[0x23C];
    float f_23C;
} Node;

extern void func_041ED0(Node *, char *, float);

void func_041F30(Node *a0)
{
    func_041ED0(a0, (char *)a0 + 0x200, a0->f_23C);
}
