/* LEVEL_10:0x0CA5E0 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_130AD8 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00209BB0;
extern int func_130A58(int a0);
extern int func_130310(int a0);
extern void func_0D8390(int a0, int a1, int a2, int a3);
extern void func_0D83C8(int a0);
extern int func_130AD8(void);
extern int func_130B78(void);
extern void func_130E18(void);
extern void func_130E70(int a0);
extern int func_0D8880(int key, int state, int arg);
extern void func_133560(int *p, int a1);
extern void func_133590(char *record);

void func_0CA5E0(int *o)
{
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA73), 0, 0);
        func_0D83C8(5);
    } else if (func_130AD8() != 0) {
        if (D_00209BB0 != 0) {
            func_130B78();
            func_130E18();
            func_133560(o, 0x16);
        } else {
            func_0D8880(2, 0xA75, 0x21A);
            func_130B78();
            func_130E18();
            func_130E70(1);
            func_133590((char *)o);
        }
    } else {
        func_133560(o, 8);
    }
}
