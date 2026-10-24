/* LEVEL_17:0x001038 -- carries the level from 0xF8 to 0xFC. */
typedef struct {
    char pad0[0xF8];
    float fF8;
    float fFC;
} Rec;

extern Rec *D_0018E2CC;

void func_001038(void)
{
    D_0018E2CC->fFC = D_0018E2CC->fF8;
}
