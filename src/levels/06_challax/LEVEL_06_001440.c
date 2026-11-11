/* LEVEL_06:0x001440 -- carries the level from 0xF8 to 0xFC. */
typedef struct {
    char pad0[0xF8];
    float fF8;
    float fFC;
} Rec;

extern Rec *D_001DE148;

void func_001440(void)
{
    D_001DE148->fFC = D_001DE148->fF8;
}
