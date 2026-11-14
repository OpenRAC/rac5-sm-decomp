/* LEVEL_23:0x084D30 -- placement copy of LEVEL_01_08F310.c: clears the global block and sets its default fields (flag bit, counters, view). */
typedef struct Blk { char pad00[0x68]; unsigned int w68; int w6C; unsigned short h70; char pad72[0x32]; unsigned char bA4; unsigned char bA5; } Blk;
extern Blk D_0022B4A0;
extern void *memset(void *, int, unsigned int);
extern unsigned char g_ALPHASORT_CurrentView;
void func_084D30(void)
{
    memset(&D_0022B4A0, 0, 0xF8);
    D_0022B4A0.bA5 = 0x12;
    D_0022B4A0.w68 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0022B4A0.w6C = 1;
    D_0022B4A0.bA4 = 0;
    D_0022B4A0.h70 = 1;
}
