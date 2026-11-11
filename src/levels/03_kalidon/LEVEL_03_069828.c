/* LEVEL_03.REL:0x069828 -- subtracts the shared global D_226D48 from the node field. */
typedef struct {
    char pad_00[0xF60];
    float f;
} Node;

extern float D_226D48;

float func_069828(Node *a0)
{
    return a0->f - D_226D48;
}
