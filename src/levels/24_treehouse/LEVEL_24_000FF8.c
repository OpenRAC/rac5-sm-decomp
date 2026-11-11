/* LEVEL_24:000FF8 -- reads the record's field at +0x10C. */
typedef struct { char pad[0x10C]; float f; } Rec;
extern Rec *D_001BFEC8;
float func_000FF8(void)
{
    return D_001BFEC8->f;
}
