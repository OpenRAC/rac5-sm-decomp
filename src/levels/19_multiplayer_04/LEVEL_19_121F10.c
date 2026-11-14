/* LEVEL_19:0x121F10 -- placement copy of LEVEL_16_1215A8.c: resets the ring state unless a fixed mode is active, then refreshes every ring slot and clears the cursor fields. */
extern unsigned char D_002E1F90;
extern unsigned int D_001BD178;
extern unsigned int D_001BCCF8;
extern unsigned char D_001BCDE4;
extern int D_002E1F88;
extern unsigned int D_001B5E04;
extern float D_001BCCFC;
extern int D_001BD0D0[];
extern int func_0A9F78(void);
extern void func_11FC28(void);
extern void func_11E7D0(void);
extern void func_121C98(void);

void func_121F10(void)
{
    unsigned int i;

    if (func_0A9F78() != 0x31) {
        func_11FC28();
        D_002E1F90 = 0;
        D_001BD178 = 0;
        D_001BCCF8 = 0;
    }
    D_001BCDE4 = 1;
    func_11E7D0();
    i = 0;
    D_002E1F88 = 9;
    for (; i < D_001B5E04; i++) {
        func_121C98();
    }
    D_001BCCFC = 0.0f;
    D_001BD0D0[2] = 0;
}
