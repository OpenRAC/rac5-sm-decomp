/* LEVEL_19:0x1440E0 -- placement copy of LEVEL_01_16AA48.c: clears the two 0xF8-byte slot records and gives each its kind (6), counters, flag bytes and the shared id taken from the table. */
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

extern Slot D_002E4C08[];
extern unsigned short D_0024E3C0;
extern void *memset(void *p, int v, unsigned int n);

void func_1440E0(void)
{
    memset(&D_002E4C08[0], 0, 0xF8);
    D_002E4C08[0].w68 = 6;
    D_002E4C08[0].w6C = 1;
    D_002E4C08[0].bA5 = 0x12;
    D_002E4C08[0].s70 = 1;
    D_002E4C08[0].bA4 = 0;
    D_002E4C08[0].s74 = D_0024E3C0;
    D_002E4C08[0].s84 = D_0024E3C0;
    memset(&D_002E4C08[1], 0, 0xF8);
    D_002E4C08[1].w68 = 6;
    D_002E4C08[1].bA5 = 0x12;
    D_002E4C08[1].bA4 = 1;
    D_002E4C08[1].w6C = 1;
    D_002E4C08[1].s70 = 1;
    D_002E4C08[1].s74 = D_0024E3C0;
    D_002E4C08[1].s84 = D_0024E3C0;
}
