/* LEVEL_16:0x095C80 -- placement copy of LEVEL_01_0A73A8.c: resets two globals to -1 when value is zero, clears a flag; second function sets a byte when value is one. */
extern int D_001A5138;
extern int D_001A513C;
extern int D_001A5140;
extern char D_001A5148;

void func_095C80(int value)
{
    if (value == 0) {
        D_001A5138 = -1;
        D_001A513C = -1;
    }
    D_001A5140 = 0;
}

void func_095CA8(int value)
{
    if (value == 1)
        D_001A5148 = (char)value;
}
