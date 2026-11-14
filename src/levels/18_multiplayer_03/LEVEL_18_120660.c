/* LEVEL_18:0x120660 -- placement copy of LEVEL_16_1215A8.c: resets the ring state unless a fixed mode is active, then refreshes every ring slot and clears the cursor fields. */
extern unsigned char D_002E2190;
extern unsigned int D_001BD480;
extern unsigned int D_001BD000;
extern unsigned char D_001BD0EC;
extern int D_002E2188;
extern unsigned int D_001B6104;
extern float D_001BD004;
extern int D_001BD3D8[];
extern int func_0A9678(void);
extern void func_11E378(void);
extern void func_11CF20(void);
extern void func_1203E8(void);

void func_120660(void)
{
    unsigned int i;

    if (func_0A9678() != 0x31) {
        func_11E378();
        D_002E2190 = 0;
        D_001BD480 = 0;
        D_001BD000 = 0;
    }
    D_001BD0EC = 1;
    func_11CF20();
    i = 0;
    D_002E2188 = 9;
    for (; i < D_001B6104; i++) {
        func_1203E8();
    }
    D_001BD004 = 0.0f;
    D_001BD3D8[2] = 0;
}
