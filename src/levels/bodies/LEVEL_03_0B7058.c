typedef struct {
    char pad_00[0x08];
    int i_08;
    char pad_0C[0x04];
    int i_10;
    char pad_14[0x0C];
    int i_20;
    char pad_24[0x14];
} Rec;

extern Rec D_00214FA8[];

void func_0B7058(int index, int value) {
    if (D_00214FA8[index].i_10 != 0)
        return;
    D_00214FA8[index].i_08 = 2;
    D_00214FA8[index].i_20 = (int)((float)value * 0.016667f * 30.0f);
}
