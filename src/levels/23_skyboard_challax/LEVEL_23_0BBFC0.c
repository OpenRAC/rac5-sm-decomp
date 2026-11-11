/* LEVEL_23:0x0BBFC0 -- a sixteen byte block is dropped in a global slot. */
typedef struct {
    int i[4];
} Quad;

extern Quad D_002FCE58;

void func_0BBFC0(Quad *src)
{
    D_002FCE58 = *src;
}
