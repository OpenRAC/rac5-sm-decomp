/* LEVEL_06:0x087F60 -- placement copy of LEVEL_01_08F310.c: clears the global block and sets its default fields (flag bit, counters, view). */
typedef struct Blk { char pad00[0x68]; unsigned int w68; int w6C; unsigned short h70; char pad72[0x32]; unsigned char bA4; unsigned char bA5; } Blk;
extern Blk D_00246DE0;
extern void *memset(void *, int, unsigned int);
extern unsigned char g_ALPHASORT_CurrentView;
void func_087F60(void)
{
    memset(&D_00246DE0, 0, 0xF8);
    D_00246DE0.bA5 = 0x12;
    D_00246DE0.w68 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00246DE0.w6C = 1;
    D_00246DE0.bA4 = 0;
    D_00246DE0.h70 = 1;
}
