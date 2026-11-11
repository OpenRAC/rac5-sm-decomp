/* LEVEL_16:000DF8 -- reads the global record's field. */
typedef struct { char pad[0x110]; float f; } Rec;
extern Rec *D_0019ACCC;
float func_000DF8(void)
{
    return D_0019ACCC->f;
}
