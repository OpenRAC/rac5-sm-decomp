/* LEVEL_03.REL:0x001428 -- reads field 0xfc of the node behind the global pointer
   D_2078C8. */
typedef struct {
    char pad_00[0xfc];
    float f;
} Node;

extern Node *D_2078C8;

float func_001428(void)
{
    return D_2078C8->f;
}
