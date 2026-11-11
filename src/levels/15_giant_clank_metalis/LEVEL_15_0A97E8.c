/* LEVEL_15:0x0A97E8 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_0F1B40 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00155830;
extern int func_0F1AC0(int a0);
extern int func_0F1378(int a0);
extern void func_0B7590(int a0, int a1, int a2, int a3);
extern void func_0B75C8(int a0);
extern int func_0F1B40(void);
extern int func_0F1BE0(void);
extern void func_0F1E80(void);
extern void func_0F1ED8(int a0);
extern int func_0B7A80(int key, int state, int arg);
extern void func_0F45A8(int *p, int a1);
extern void func_0F45D8(char *record);

void func_0A97E8(int *o)
{
    if (func_0F1AC0(1) != 0) {
        func_0B7590(0, func_0F1378(0xA73), 0, 0);
        func_0B75C8(5);
    } else if (func_0F1B40() != 0) {
        if (D_00155830 != 0) {
            func_0F1BE0();
            func_0F1E80();
            func_0F45A8(o, 0x16);
        } else {
            func_0B7A80(2, 0xA75, 0x21A);
            func_0F1BE0();
            func_0F1E80();
            func_0F1ED8(1);
            func_0F45D8((char *)o);
        }
    } else {
        func_0F45A8(o, 8);
    }
}
