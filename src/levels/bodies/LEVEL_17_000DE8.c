/* LEVEL_17.REL:000DE8 -- reads the field +10C of the level's global record. */
typedef struct {
    char pad[0x10c];
    float f_10C;
} Rec;

extern Rec *D_18E2CC;

float func_000DE8(void)
{
    return D_18E2CC->f_10C;
}
