/* LEVEL_10.REL:0x001168 -- reads field 0xf8 of the node behind the global pointer
   D_1F8248. */
typedef struct {
    char pad_00[0xf8];
    float f;
} Node;

extern Node *D_1F8248;

float func_001168(void)
{
    return D_1F8248->f;
}
