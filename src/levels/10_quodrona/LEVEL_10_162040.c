/* LEVEL_10:0x162040 -- placement copy of LEVEL_01_16AA48.c: clears the two 0xF8-byte slot records and gives each its kind (6), counters, flag bytes and the shared id taken from the table. */
typedef struct {
    char pad00[0x68];
    int w68;
    int w6C;
    short s70;
    char pad72[2];
    short s74;
    char pad76[0xE];
    short s84;
    char pad86[0x1E];
    unsigned char bA4;
    unsigned char bA5;
    char padA6[0x52];
} Slot;

extern Slot D_0039EAC0[];
extern unsigned short D_002A11C0;
extern void *memset(void *p, int v, unsigned int n);

void func_162040(void)
{
    memset(&D_0039EAC0[0], 0, 0xF8);
    D_0039EAC0[0].w68 = 6;
    D_0039EAC0[0].w6C = 1;
    D_0039EAC0[0].bA5 = 0x12;
    D_0039EAC0[0].s70 = 1;
    D_0039EAC0[0].bA4 = 0;
    D_0039EAC0[0].s74 = D_002A11C0;
    D_0039EAC0[0].s84 = D_002A11C0;
    memset(&D_0039EAC0[1], 0, 0xF8);
    D_0039EAC0[1].w68 = 6;
    D_0039EAC0[1].bA5 = 0x12;
    D_0039EAC0[1].bA4 = 1;
    D_0039EAC0[1].w6C = 1;
    D_0039EAC0[1].s70 = 1;
    D_0039EAC0[1].s74 = D_002A11C0;
    D_0039EAC0[1].s84 = D_002A11C0;
}
