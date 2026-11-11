/* LEVEL_16:000FD0 -- reads the global record's field. */
typedef struct { char pad[0xF8]; float f; } Rec;
extern Rec *D_0019ACCC;
float func_000FD0(void)
{
    return D_0019ACCC->f;
}
