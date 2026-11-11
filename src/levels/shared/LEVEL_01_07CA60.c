/* LEVEL_01:0x07CA60 -- returns the float at 0x28 of the object reached
   through the chain node at 0x18, or through the node at 0x14, or 0.0. */
typedef struct Node {
    int pad_00;
    struct Node *f_04;
    char pad_08[0xC];
    struct Node *f_14;
    struct Node *f_18;
    char pad_1C[0xC];
    float f_28;
} Node;

typedef struct {
    char pad_00[0x48];
    Node *f_48;
} Rec;

float func_07CA60(Rec *a0)
{
    Node *root = a0->f_48;
    Node *p = root->f_18;

    if (!p) {
        p = root->f_14;
        if (!p) {
            return 0.0f;
        }
    }
    return p->f_04->f_28;
}
