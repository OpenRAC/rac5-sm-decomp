/* LEVEL_23:0x0BFF40 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_1243F0 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001D3FB0;
extern int func_124370(int a0);
extern int func_123C28(int a0);
extern void func_0CDD80(int a0, int a1, int a2, int a3);
extern void func_0CDDB8(int a0);
extern int func_1243F0(void);
extern int func_124490(void);
extern void func_124730(void);
extern void func_124788(int a0);
extern int func_0CE270(int key, int state, int arg);
extern void func_126E58(int *p, int a1);
extern void func_126E88(char *record);

void func_0BFF40(int *o)
{
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA73), 0, 0);
        func_0CDDB8(5);
    } else if (func_1243F0() != 0) {
        if (D_001D3FB0 != 0) {
            func_124490();
            func_124730();
            func_126E58(o, 0x16);
        } else {
            func_0CE270(2, 0xA75, 0x21A);
            func_124490();
            func_124730();
            func_124788(1);
            func_126E88((char *)o);
        }
    } else {
        func_126E58(o, 8);
    }
}
