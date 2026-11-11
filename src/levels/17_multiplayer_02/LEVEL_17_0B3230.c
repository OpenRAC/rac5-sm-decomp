/* LEVEL_17:0x0B3230 -- placement copy of LEVEL_16_0B3CF0.c: sets or clears the enable flags of a group of entries. */
typedef struct El {
    char pad[0xCC];
    char on;
} El;
extern El D_001A1B40;
extern El D_001A1A58;
extern El D_001A1D10;
extern El D_001A1DF8;
extern char D_001A1CF4;
extern char D_001A2094;
extern char D_001D5390[];
extern int func_034708(char *p);
extern int func_1125A0(void);

void func_0B3230(void)
{
    if (func_034708(D_001D5390)) {
        D_001A1B40.on = 0;
        D_001A1A58.on = 0;
        D_001A1D10.on = 0;
        D_001A1DF8.on = 0;
    } else {
        D_001A1A58.on = 1;
        D_001A1D10.on = 1;
        D_001A1DF8.on = 1;
        D_001A1B40.on = 1;
    }
    if (func_1125A0() == 0) {
        D_001A1CF4 = 0;
        D_001A1A58.on = 0;
        D_001A1B40.on = 0;
        D_001A1DF8.on = 0;
        D_001A2094 = 0;
        D_001A1D10.on = 0;
    }
}
