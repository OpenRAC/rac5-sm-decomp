/* LEVEL_16:0x1215A8 -- resets the ring state unless a fixed mode is active, then refreshes every ring slot and clears the cursor fields. */
extern unsigned char D_002E1E10;
extern unsigned int D_001BC000;
extern unsigned int D_001BBB80;
extern unsigned char D_001BBC6C;
extern int D_002E1E08;
extern unsigned int D_001B4C84;
extern float D_001BBB84;
extern int D_001BBF58[];
extern int func_0AA6A0(void);
extern void func_11F2C0(void);
extern void func_11DE68(void);
extern void func_121330(void);

void func_1215A8(void)
{
    unsigned int i;

    if (func_0AA6A0() != 0x31) {
        func_11F2C0();
        D_002E1E10 = 0;
        D_001BC000 = 0;
        D_001BBB80 = 0;
    }
    D_001BBC6C = 1;
    func_11DE68();
    i = 0;
    D_002E1E08 = 9;
    for (; i < D_001B4C84; i++) {
        func_121330();
    }
    D_001BBB84 = 0.0f;
    D_001BBF58[2] = 0;
}
