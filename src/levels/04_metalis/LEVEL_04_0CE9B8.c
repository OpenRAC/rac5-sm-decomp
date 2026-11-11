/* LEVEL_04:0x0CE9B8 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_13F0F8 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_0021A070;
extern int func_13F078(int a0);
extern int func_13E930(int a0);
extern void func_0DC800(int a0, int a1, int a2, int a3);
extern void func_0DC838(int a0);
extern int func_13F0F8(void);
extern int func_13F198(void);
extern void func_13F438(void);
extern void func_13F490(int a0);
extern int func_0DCD00(int key, int state, int arg);
extern void func_141B60(int *p, int a1);
extern void func_141B90(char *record);

void func_0CE9B8(int *o)
{
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA73), 0, 0);
        func_0DC838(5);
    } else if (func_13F0F8() != 0) {
        if (D_0021A070 != 0) {
            func_13F198();
            func_13F438();
            func_141B60(o, 0x16);
        } else {
            func_0DCD00(2, 0xA75, 0x21A);
            func_13F198();
            func_13F438();
            func_13F490(1);
            func_141B90((char *)o);
        }
    } else {
        func_141B60(o, 8);
    }
}
