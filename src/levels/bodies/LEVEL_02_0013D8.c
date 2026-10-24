/* LEVEL_02.REL @ 0x0013D8 — 16 octets, lwc1 */
typedef struct {
    char padF8[0xF8];
    float fF8;
} Rec;

extern Rec *D_00203EC8;

float func_0013D8(void)
{
    return D_00203EC8->fF8;
}
