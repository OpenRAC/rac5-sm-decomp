/* LEVEL_19:0x026048 -- placement copy of LEVEL_16_0264A0.c: copies settings from an indexed table entry (and its head entry) into the active record. */
extern char *D_001A2C34;
extern char *D_001A2C38;

#define REC(T, o) (*(T *)(D_001A2C34 + (o)))
#define ROW(T, o) (*(T *)(D_001A2C38 + off + (o)))
#define HEAD(T, o) (*(T *)(D_001A2C38 + (o)))

void func_026048(void *idx)
{
    int off = (int)idx * 0x5F8;

    REC(int, 0xC) = 0;
    REC(int, 0x14) = 1;
    REC(int, 0x10) = 1;
    REC(int, 0x38) = 1;
    REC(float, 0x28) = ROW(float, 0x2C);
    REC(float, 0x2C) = ROW(float, 0x30);
    REC(float, 0x30) = ROW(float, 0x34);
    REC(float, 0x34) = ROW(float, 0x38);
    REC(int, 0x24) = ROW(int, 0x40);
    REC(int, 0x40) = ROW(int, 0x44);
    REC(int, 0x18) = HEAD(int, 0x48);
    REC(int, 0x1C) = HEAD(int, 0x4C);
    REC(int, 0x50) = HEAD(int, 0x54);
    REC(int, 0x44) = ROW(int, 0x50);
}
