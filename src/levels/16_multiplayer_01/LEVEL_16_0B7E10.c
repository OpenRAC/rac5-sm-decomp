/* LEVEL_16:0x0B7E10 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_10FAF8 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001AEC28;
extern int func_10FA78(int a0);
extern int func_10F330(int a0);
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern void func_0C6680(int a0);
extern int func_10FAF8(void);
extern int func_10FB98(void);
extern void func_10FD70(void);
extern void func_10FD98(int a0);
extern int func_0C6B38(int key, int state, int arg);
extern void func_111DB0(int *p, int a1);
extern void func_111DE0(char *record);

void func_0B7E10(int *o)
{
    if (func_10FA78(1) != 0) {
        func_0C6648(0, func_10F330(0xA73), 0, 0);
        func_0C6680(5);
    } else if (func_10FAF8() != 0) {
        if (D_001AEC28 != 0) {
            func_10FB98();
            func_10FD70();
            func_111DB0(o, 0x16);
        } else {
            func_0C6B38(2, 0xA75, 0x21A);
            func_10FB98();
            func_10FD70();
            func_10FD98(1);
            func_111DE0((char *)o);
        }
    } else {
        func_111DB0(o, 8);
    }
}
