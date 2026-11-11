/* LEVEL_23:0x003B58 -- writes the level of the global record at 0x154. */
typedef struct {
    char pad0[0x154];
    float f154;
} Rec;

extern Rec *D_001C2654;

void func_003B58(float f12)
{
    D_001C2654->f154 = f12;
}
