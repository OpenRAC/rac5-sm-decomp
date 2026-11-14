/* LEVEL_07:0x091198 -- placement copy of LEVEL_01_08F310.c: clears the global block and sets its default fields (flag bit, counters, view). */
typedef struct Blk { char pad00[0x68]; unsigned int w68; int w6C; unsigned short h70; char pad72[0x32]; unsigned char bA4; unsigned char bA5; } Blk;
extern Blk D_0026F960;
extern void *memset(void *, int, unsigned int);
extern unsigned char g_ALPHASORT_CurrentView;
void func_091198(void)
{
    memset(&D_0026F960, 0, 0xF8);
    D_0026F960.bA5 = 0x12;
    D_0026F960.w68 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_0026F960.w6C = 1;
    D_0026F960.bA4 = 0;
    D_0026F960.h70 = 1;
}
