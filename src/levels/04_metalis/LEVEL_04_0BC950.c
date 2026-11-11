/* 0BC950 -- direct record indexing. */
typedef struct {
    char pad_00[0x08];
    int i_08;
    char pad_0C[4];
    int i_10;
    char pad_14[0x0C];
    int i_20;
    char pad_24[0x14];
} Rec;

extern Rec D_00215CF0[];

void func_0BC950(int a0, int a1)
{
    if (D_00215CF0[a0].i_10 != 0)
        return;
    D_00215CF0[a0].i_08 = 2;
    D_00215CF0[a0].i_20 = (int)((float)a1 * 0.016667f * 30.0f);
}
