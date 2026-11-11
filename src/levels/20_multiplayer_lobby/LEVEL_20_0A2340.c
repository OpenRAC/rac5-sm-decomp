/* LEVEL_20:0x0A2340 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_0E28E0 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00111308;
extern int func_0E2860(int a0);
extern int func_0E2118(int a0);
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern void func_0B0BB0(int a0);
extern int func_0E28E0(void);
extern int func_0E2980(void);
extern void func_0E2B58(void);
extern void func_0E2B80(int a0);
extern int func_0B1068(int key, int state, int arg);
extern void func_0E4B98(int *p, int a1);
extern void func_0E4BC8(char *record);

void func_0A2340(int *o)
{
    if (func_0E2860(1) != 0) {
        func_0B0B78(0, func_0E2118(0xA73), 0, 0);
        func_0B0BB0(5);
    } else if (func_0E28E0() != 0) {
        if (D_00111308 != 0) {
            func_0E2980();
            func_0E2B58();
            func_0E4B98(o, 0x16);
        } else {
            func_0B1068(2, 0xA75, 0x21A);
            func_0E2980();
            func_0E2B58();
            func_0E2B80(1);
            func_0E4BC8((char *)o);
        }
    } else {
        func_0E4B98(o, 8);
    }
}
