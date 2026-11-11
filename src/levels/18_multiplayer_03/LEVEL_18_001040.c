/* LEVEL_18:0x001040 -- reads the level of the global record at 0xF8. */
typedef struct {
    char pad0[0xF8];
    float fF8;
} Rec;

extern Rec *D_0019C14C;

float func_001040(void)
{
    return D_0019C14C->fF8;
}
