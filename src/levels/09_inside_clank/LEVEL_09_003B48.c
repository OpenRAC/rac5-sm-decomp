/* LEVEL_09.REL:0x003B48 -- stores the incoming value in field 0x154 of the node
   behind the global pointer D_1D9054. */
typedef struct {
    char pad_00[0x154];
    float f;
} Node;

extern Node *D_1D9054;

void func_003B48(float a0)
{
    D_1D9054->f = a0;
}
