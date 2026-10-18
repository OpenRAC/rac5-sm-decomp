/* sceSifResetIop — retail 0x01ED8818..0x01ED896C (340 bytes).
 * Source: lombyte-upstream src/sdk/rpc/sce_sif_reset_iop.c, adapted to the
 * RAC5 revision (sceSifExecNotifyHandler(0/1, 0) before sceSifStopDma).
 *
 * The register constant handed to sceSifGetReg is written through a null
 * pointer value.  That keeps it a sign-extended immediate (-2147483648,
 * printed 0xffffffff80000000), which cc1's length attribute counts as ONE
 * instruction; reorg may then place it in the jal delay slot, as retail does:
 *     jal sceSifGetReg ; lui $a0,0x8000
 * The plain 0x80000000 literal is a two-instruction `li` for cc1 and is never
 * delay-slot eligible: it stays before the jal and the slot gets a nop
 * (297/340).  Semantics are unchanged: (u32)p with p == 0 is 0.
 */
typedef unsigned int u32;
typedef int s32;
typedef unsigned long long u64;

typedef struct {
    u64 psize : 8;
    u64 dsize : 24;
    u64 dest : 32;
    s32 cid;
    u32 opt;
} SifCmdHeader;

typedef struct {
    SifCmdHeader header;
    s32 arglen;
    s32 mode;
    char arg[80];
} SifResetPacket;

typedef struct {
    u32 data;
    u32 addr;
    s32 size;
    s32 mode;
} SifDmaData;

extern SifResetPacket D_00158440; /* 0x01FE7540 */
extern void sceSifStopDma(void);
extern u32 sceSifGetReg(u32 reg);
extern u32 sceSifSetReg(u32 reg, u32 val);
extern void sceSifWriteBackDCache(void *p, s32 size);
extern u32 _sceSifSetDma(SifDmaData *dma, s32 count);
extern void sceSifExecNotifyHandler(int no, void *arg);

int sceSifResetIop(const char *arg, s32 mode) {
    SifDmaData dma;
    u32 addr;
    s32 arglen;
    u32 *regaddr = 0;

    sceSifExecNotifyHandler(0, 0);
    sceSifExecNotifyHandler(1, 0);
    sceSifStopDma();
    addr = sceSifGetReg((u32)regaddr + 0x80000000);
    D_00158440.mode = mode;
    for (arglen = 0; arg[arglen] != 0; arglen++) {
        D_00158440.arg[arglen] = arg[arglen];
    }
    D_00158440.header.dest = 0;
    D_00158440.arglen = arglen;
    D_00158440.header.cid = 0x80000003;
    D_00158440.header.dsize = 0;
    D_00158440.header.psize = sizeof(SifResetPacket);
    dma.data = (u32)&D_00158440;
    dma.addr = addr;
    dma.size = sizeof(SifResetPacket);
    dma.mode = 0x44;
    sceSifWriteBackDCache(&D_00158440, sizeof(SifResetPacket));
    sceSifSetReg(4, 0x40000);
    if (_sceSifSetDma(&dma, 1)) {
        sceSifSetReg(4, 0x10000);
        sceSifSetReg(4, 0x20000);
        sceSifSetReg(0x80000002, 0);
        sceSifSetReg(0x80000000, 0);
        return 1;
    }
    return 0;
}
