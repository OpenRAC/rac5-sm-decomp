/* LEVEL_18.REL:0x15C898 -- converts the frame counter at 150 per second
   into seconds on the node's timing field. */
typedef struct {
    char pad_00[0x58];
    void *p_58;
} Rec;

typedef struct {
    char pad_00[0x168];
    float f_168;
    char pad_16C[0x0C];
    float f_178;
} Node;

extern void func_15B3C8(Rec *);

void func_15C898(Rec *a0)
{
    Node *n = a0->p_58;

    func_15B3C8(a0);
    n->f_178 = n->f_168 / 150.0f;
}
