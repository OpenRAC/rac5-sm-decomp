/* LEVEL_01.REL:0x001400 -- reads the live amplitude of the current voice. */
typedef struct {
    char pad[0xFC];
    float f_FC;
} Voice;

extern Voice *D_001EF248;

float func_001400(void)
{
    return D_001EF248->f_FC;
}
