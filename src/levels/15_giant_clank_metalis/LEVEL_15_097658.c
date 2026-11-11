/* LEVEL_15.REL:0x097658 -- claims a free slot of the level's table and stores the
   scaled value in it. */
typedef struct {
    char pad[8];
    int state;
    char pad2[4];
    int flag;
    char pad3[0x0C];
    float f;
    char pad4[0x14];
} Rec;

extern Rec D_001514B0[];

void func_097658(int index, int value)
{
    if (D_001514B0[index].flag != 0)
        return;
    D_001514B0[index].state = 2;
    *(int *)&D_001514B0[index].f =
        (int)((float)value * 0.016667f * 30.0f);
}
