/* LEVEL_05:0x0274A8 -- copies the record the level keeps at the given slot
   into the level's current record. */
typedef struct {
    float f[12];
    int i;
} Rec;

extern char *D_1E332C;
extern Rec D_21CC40;

void func_0274A8(int slot)
{
    D_21CC40 = *(Rec *)(D_1E332C + slot * 52 + 0xE8);
}
