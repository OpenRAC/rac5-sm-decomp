/* LEVEL_23:0x0013D8 -- reads the level of the global record at 0xF8. */
typedef struct {
    char pad0[0xF8];
    float fF8;
} Rec;

extern Rec *D_001C2648;

float func_0013D8(void)
{
    return D_001C2648->fF8;
}
