/* LEVEL_06.REL:001200 -- reads the field +110 of the level's global record. */
typedef struct {
    char pad[0x110];
    float f_110;
} Rec;

extern Rec *D_1DE148;

float func_001200(void)
{
    return D_1DE148->f_110;
}
