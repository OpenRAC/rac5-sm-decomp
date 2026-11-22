/* USA boot sceSifInitCmd (22 November 2026): port of a sister decompilation
 * twin, not accepted.
 * Exact compiled body, but it ends in a tail jump and the boot gate counts
 * only bodies that end in a normal return. No matching credit.
 */
/* boot:0x01ED3640 -- initialises the SIF command buffers, registers the DMA handler and announces the command channel to the IOP. Ported from OpenRAC/rac4-decomp src/core/00129660.c (func_00129660). */
typedef struct {
    void *f0;
    void *f4;
    int f8;
    void *fC;
    int f10;
    int f14;
    int f18;
    int *f1C;
} Type1;
typedef struct {
    void (*fn)(void *, void *);
    void *arg;
    int pad;
} Type2;
typedef struct {
    unsigned char pad0[0xC];
    int fC;
    void *f10;
} Type3;
extern int sceSifDmaSuspendFlag;
extern int g_sceSifSreg[];
extern int dma_handler_slot[];
extern unsigned char D_01FE3DC0[];
extern unsigned char D_01FE3E40[];
extern Type1 sif_cmd_buffer;
extern Type2 D_01FE3EC0[];
extern Type3 D_01FE3E80;
extern int DIntr(void);
extern int EIntr(void);
extern void FlushCache(int);
extern void sceSifSetDChain(void);
extern int AddDmacHandler(int, void *, int);
extern int EnableDmac(int);
extern unsigned int sceSifGetReg();
extern int sceSifSetReg(int, int);
extern int sceSifSendCmd(int, int, int, int, int, int);
extern void func_01ED3480();
extern void func_01ED3460();
extern void func_01ED3B90();

void sceSifInitCmd(void)
{
    int i;
    int r;

    DIntr();
    if (sceSifDmaSuspendFlag != 0) {
        EIntr();
        return;
    }
    sceSifDmaSuspendFlag = 1;
    sif_cmd_buffer.f0 = (void *)((unsigned int)D_01FE3DC0 | 0x20000000);
    sif_cmd_buffer.f4 = (void *)((unsigned int)D_01FE3E40 | 0x20000000);
    sif_cmd_buffer.f8 = 0;
    sif_cmd_buffer.fC = D_01FE3EC0;
    sif_cmd_buffer.f10 = 0x20;
    sif_cmd_buffer.f14 = 0;
    sif_cmd_buffer.f18 = 0;
    sif_cmd_buffer.f1C = g_sceSifSreg;
    for (i = 0; i < 0x20; i++) {
        D_01FE3EC0[i].fn = 0;
        D_01FE3EC0[i].arg = 0;
    }
    for (i = 0; i < 0x20; i++) {
        g_sceSifSreg[i] = 0;
    }
    D_01FE3EC0[0].fn = func_01ED3480;
    D_01FE3EC0[1].fn = func_01ED3460;
    D_01FE3EC0[0].arg = &sif_cmd_buffer;
    D_01FE3EC0[1].arg = &sif_cmd_buffer;
    EIntr();
    FlushCache(0);
    if (*(volatile unsigned int *)0x1000E010 & 0x20) {
        *(volatile unsigned int *)0x1000E010 = 0x20;
    }
    if (!(*(volatile unsigned int *)0x1000C000 & 0x100)) {
        sceSifSetDChain();
    }
    dma_handler_slot[0] = AddDmacHandler(5, func_01ED3B90, 0);
    EnableDmac(5);
    r = sceSifGetReg(0x80000000);
    sif_cmd_buffer.f8 = r;
    if (r != 0) {
        D_01FE3E80.f10 = D_01FE3DC0;
        sceSifSendCmd(0x80000000, (int)&D_01FE3E80, 0x14, 0, 0, 0);
        return;
    }
    while (!(sceSifGetReg(4) & 0x20000)) {
    }
    r = sceSifGetReg(2);
    sif_cmd_buffer.f8 = r;
    sceSifSetReg(0x80000000, r);
    sceSifSetReg(0x80000001, (int)&sif_cmd_buffer);
    D_01FE3E80.f10 = D_01FE3DC0;
    D_01FE3E80.fC = 0;
    sceSifSendCmd(0x80000002, (int)&D_01FE3E80, 0x14, 0, 0, 0);
}
