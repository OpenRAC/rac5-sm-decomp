/* LEVEL_06.REL:001400 -- reads the field +FC of the level's global record. */
typedef struct {
    char pad[0xfc];
    float f_FC;
} Rec;

extern Rec *D_1DE148;

float func_001400(void)
{
    return D_1DE148->f_FC;
}
