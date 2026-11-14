/* LEVEL_17:0x120FD0 -- placement copy of LEVEL_16_1215A8.c: resets the ring state unless a fixed mode is active, then refreshes every ring slot and clears the cursor fields. */
extern unsigned char D_002D3110;
extern unsigned int D_001AF5F8;
extern unsigned int D_001AF178;
extern unsigned char D_001AF264;
extern int D_002D3108;
extern unsigned int D_001A8284;
extern float D_001AF17C;
extern int D_001AF550[];
extern int func_0A9BE0(void);
extern void func_11ECE8(void);
extern void func_11D890(void);
extern void func_120D58(void);

void func_120FD0(void)
{
    unsigned int i;

    if (func_0A9BE0() != 0x31) {
        func_11ECE8();
        D_002D3110 = 0;
        D_001AF5F8 = 0;
        D_001AF178 = 0;
    }
    D_001AF264 = 1;
    func_11D890();
    i = 0;
    D_002D3108 = 9;
    for (; i < D_001A8284; i++) {
        func_120D58();
    }
    D_001AF17C = 0.0f;
    D_001AF550[2] = 0;
}
