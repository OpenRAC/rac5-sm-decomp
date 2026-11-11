/* LEVEL_02.REL:0x001200 -- reads field 0x110 of the node behind the global pointer
   D_203EC8. */
typedef struct {
    char pad_00[0x110];
    float f;
} Node;

extern Node *D_203EC8;

float func_001200(void)
{
    return D_203EC8->f;
}
