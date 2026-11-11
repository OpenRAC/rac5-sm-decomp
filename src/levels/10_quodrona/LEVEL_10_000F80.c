/* LEVEL_10.REL:000F80 -- reads the field +10C of the level's global record. */
typedef struct {
    char pad[0x10c];
    float f_10C;
} Rec;

extern Rec *D_1F8248;

float func_000F80(void)
{
    return D_1F8248->f_10C;
}
