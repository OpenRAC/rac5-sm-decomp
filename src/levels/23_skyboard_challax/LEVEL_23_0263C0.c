/* LEVEL_23:0x0263C0 -- copies the record the level keeps at the given slot
   into the level's current record. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_1C73AC;
extern Rec D_1FE3C0;

void func_0263C0(int slot)
{
    D_1FE3C0 = *(Rec *)(D_1C73AC + slot * 52 + 0xE8);
}
