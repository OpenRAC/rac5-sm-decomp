/* LEVEL_16:000FF8 -- reads the global record's field. */
typedef struct { char pad[0xFC]; float f; } Rec;
extern Rec *D_0019ACCC;
float func_000FF8(void)
{
    return D_0019ACCC->f;
}
