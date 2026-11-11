/* LEVEL_10:0x000F90 -- reads the level of the global record at 0x110. */
typedef struct {
    char pad0[0x110];
    float f110;
} Rec;

extern Rec *D_001F8248;

float func_000F90(void)
{
    return D_001F8248->f110;
}
