/* LEVEL_18.REL:0x05C4F0 -- subtracts the shared global D_1C43A8 from the node field. */
typedef struct {
    char pad_00[0xF60];
    float f;
} Node;

extern float D_1C43A8;

float func_05C4F0(Node *a0)
{
    return a0->f - D_1C43A8;
}
