/* LEVEL_06:0x0011F0 -- reads the level of the global record at 0x10C. */
typedef struct {
    char pad0[0x10C];
    float f10C;
} Rec;

extern Rec *D_001DE148;

float func_0011F0(void)
{
    return D_001DE148->f10C;
}
