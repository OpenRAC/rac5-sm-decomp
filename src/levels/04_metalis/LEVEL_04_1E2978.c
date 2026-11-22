/* LEVEL_04:0x1E2978 -- when called with the sentinel id and a nonzero flag, clears the global state record and copies the 0x40-byte default block (two 32-byte rows, then the first word of the next) into place. */
typedef struct {
    int w0;
    int w4;
    int w8;
    float fC;
} State;

typedef struct {
    int w[17];
} Block;

extern State D_003B3D98;
extern Block D_003B3DA8;
extern Block D_002227A0;

void func_1E2978(int flag, int id)
{
    if (id == 0xFFFF) {
        if (flag != 0) {
            D_003B3D98.fC = 1.0f;
            D_003B3D98.w0 = 0;
            D_003B3D98.w8 = 0;
            D_003B3D98.w4 = 0;
            D_003B3DA8 = D_002227A0;
        }
    }
}
