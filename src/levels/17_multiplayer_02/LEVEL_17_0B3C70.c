/* LEVEL_17:0x0B3C70 -- a sixteen byte block is dropped in a global slot. */
typedef struct {
    int i[4];
} Quad;

extern Quad D_0026AC58;

void func_0B3C70(Quad *src)
{
    D_0026AC58 = *src;
}
