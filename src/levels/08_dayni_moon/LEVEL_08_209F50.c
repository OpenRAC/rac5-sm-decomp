/* LEVEL_08:0x209F50 -- placement copy of LEVEL_04_1E2978.c: when called with the sentinel id and a nonzero flag, clears the global state record and copies the 0x40-byte default block (two 32-byte rows, then the first word of the next) into place. */
typedef struct {
    int w0;
    int w4;
    int w8;
    float fC;
} State;

typedef struct {
    int w[17];
} Block;

extern State D_003EB2E0;
extern Block D_003EB2F0;
extern Block D_00252998;

void func_209F50(int flag, int id)
{
    if (id == 0xFFFF) {
        if (flag != 0) {
            D_003EB2E0.fC = 1.0f;
            D_003EB2E0.w0 = 0;
            D_003EB2E0.w8 = 0;
            D_003EB2E0.w4 = 0;
            D_003EB2F0 = D_00252998;
        }
    }
}
