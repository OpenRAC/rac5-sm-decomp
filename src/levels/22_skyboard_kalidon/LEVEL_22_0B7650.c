/* LEVEL_22:0x0B7650 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_10A148 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_0015FF30;
extern int func_10A0C8(int a0);
extern int func_109980(int a0);
extern void func_0C5490(int a0, int a1, int a2, int a3);
extern void func_0C54C8(int a0);
extern int func_10A148(void);
extern int func_10A1E8(void);
extern void func_10A488(void);
extern void func_10A4E0(int a0);
extern int func_0C5980(int key, int state, int arg);
extern void func_10CBB0(int *p, int a1);
extern void func_10CBE0(char *record);

void func_0B7650(int *o)
{
    if (func_10A0C8(1) != 0) {
        func_0C5490(0, func_109980(0xA73), 0, 0);
        func_0C54C8(5);
    } else if (func_10A148() != 0) {
        if (D_0015FF30 != 0) {
            func_10A1E8();
            func_10A488();
            func_10CBB0(o, 0x16);
        } else {
            func_0C5980(2, 0xA75, 0x21A);
            func_10A1E8();
            func_10A488();
            func_10A4E0(1);
            func_10CBE0((char *)o);
        }
    } else {
        func_10CBB0(o, 8);
    }
}
