/* LEVEL_03:0x08EF40 -- placement copy of LEVEL_01_08F310.c: clears the global block and sets its default fields (flag bit, counters, view). */
typedef struct Blk { char pad00[0x68]; unsigned int w68; int w6C; unsigned short h70; char pad72[0x32]; unsigned char bA4; unsigned char bA5; } Blk;
extern Blk D_00274EE0;
extern void *memset(void *, int, unsigned int);
extern unsigned char g_ALPHASORT_CurrentView;
void func_08EF40(void)
{
    memset(&D_00274EE0, 0, 0xF8);
    D_00274EE0.bA5 = 0x12;
    D_00274EE0.w68 |= 2;
    g_ALPHASORT_CurrentView = 0;
    D_00274EE0.w6C = 1;
    D_00274EE0.bA4 = 0;
    D_00274EE0.h70 = 1;
}
