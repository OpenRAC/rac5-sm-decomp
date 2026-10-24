/* LEVEL_08:0x003A48 -- reads the level of the global record at 0x8C. */
typedef struct {
    char pad0[0x8C];
    float f8C;
} Rec;

extern Rec *D_00237DD4;

float func_003A48(void)
{
    return D_00237DD4->f8C;
}
