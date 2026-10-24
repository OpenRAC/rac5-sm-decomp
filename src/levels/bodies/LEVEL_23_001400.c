/* LEVEL_23:001400 -- reads the record's field at +0xFC. */
typedef struct { char pad[0xFC]; float f; } Rec;
extern Rec *D_001C2648;
float func_001400(void)
{
    return D_001C2648->f;
}
