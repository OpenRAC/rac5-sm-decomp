/* LEVEL_22:0x0A57C0 -- starts the record at index a0 with its half-second counter derived
   from a1, unless it is already running. */
typedef struct {
    char pad_00[0x08];
    int i_08;
    char pad_0C[0x04];
    int i_10;
    char pad_14[0x0C];
    int i_20;
    char pad_24[0x14];
} Rec;

extern Rec D_0015BCA8[];

void func_0A57C0(int a0, int a1)
{
    if (D_0015BCA8[a0].i_10 != 0)
        return;
    D_0015BCA8[a0].i_08 = 2;
    D_0015BCA8[a0].i_20 = (int)((float)a1 * 0.016667f * 30.0f);
}
