/* LEVEL_17:0x0B7350 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_10F070 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001A2228;
extern int func_10EFF0(int a0);
extern int func_10E8A8(int a0);
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern void func_0C5BC0(int a0);
extern int func_10F070(void);
extern int func_10F110(void);
extern void func_10F2E8(void);
extern void func_10F310(int a0);
extern int func_0C6078(int key, int state, int arg);
extern void func_111328(int *p, int a1);
extern void func_111358(char *record);

void func_0B7350(int *o)
{
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA73), 0, 0);
        func_0C5BC0(5);
    } else if (func_10F070() != 0) {
        if (D_001A2228 != 0) {
            func_10F110();
            func_10F2E8();
            func_111328(o, 0x16);
        } else {
            func_0C6078(2, 0xA75, 0x21A);
            func_10F110();
            func_10F2E8();
            func_10F310(1);
            func_111358((char *)o);
        }
    } else {
        func_111328(o, 8);
    }
}
