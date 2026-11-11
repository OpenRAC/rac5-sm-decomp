/* LEVEL_10:0x0C6598 -- a sixteen byte block is dropped in a global slot. */
typedef struct {
    int i[4];
} Quad;

extern Quad D_00334E18;

void func_0C6598(Quad *src)
{
    D_00334E18 = *src;
}
