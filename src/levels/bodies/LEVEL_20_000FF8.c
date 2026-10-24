/* LEVEL_20:0x000FF8 -- carries the level from 0xF8 to 0xFC. */
typedef struct {
    char pad0[0xF8];
    float fF8;
    float fFC;
} Rec;

extern Rec *D_000FD3B4;

void func_000FF8(void)
{
    D_000FD3B4->fFC = D_000FD3B4->fF8;
}
