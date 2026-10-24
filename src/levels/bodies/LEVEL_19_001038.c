/* LEVEL_19.REL @ 0x001038 — 20 octets, lwc1/swc1 */
typedef struct {
    char padF8[0xF8];
    float fF8;
    float fFC;
} Rec;

extern Rec *D_0019BE4C;

void func_001038(void)
{
    D_0019BE4C->fFC = D_0019BE4C->fF8;
}
