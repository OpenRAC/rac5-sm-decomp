/* LEVEL_18:0x0B6DE8 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_10E7A8 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001B00A8;
extern int func_10E728(int a0);
extern int func_10DFE0(int a0);
extern void func_0C5620(int a0, int a1, int a2, int a3);
extern void func_0C5658(int a0);
extern int func_10E7A8(void);
extern int func_10E848(void);
extern void func_10EA20(void);
extern void func_10EA48(int a0);
extern int func_0C5B10(int key, int state, int arg);
extern void func_110A60(int *p, int a1);
extern void func_110A90(char *record);

void func_0B6DE8(int *o)
{
    if (func_10E728(1) != 0) {
        func_0C5620(0, func_10DFE0(0xA73), 0, 0);
        func_0C5658(5);
    } else if (func_10E7A8() != 0) {
        if (D_001B00A8 != 0) {
            func_10E848();
            func_10EA20();
            func_110A60(o, 0x16);
        } else {
            func_0C5B10(2, 0xA75, 0x21A);
            func_10E848();
            func_10EA20();
            func_10EA48(1);
            func_110A90((char *)o);
        }
    } else {
        func_110A60(o, 8);
    }
}
