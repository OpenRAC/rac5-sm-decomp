/* LEVEL_19.REL:0x000DF8 -- reads field 0x110 of the node behind the global pointer
   D_19BE4C. */
typedef struct {
    char pad_00[0x110];
    float f;
} Node;

extern Node *D_19BE4C;

float func_000DF8(void)
{
    return D_19BE4C->f;
}
