/* LEVEL_10.REL:0x1A63E8 -- arms the node: time to 30, mode byte to one. */
typedef struct {
    char pad_00[0x45];
    unsigned char b_45;
    char pad_46[0x2A];
    float f_70;
} Node;

void func_1A63E8(Node *a0)
{
    a0->f_70 = 30.0f;
    a0->b_45 = 1;
}
