/* LEVEL_06:0x0C3AA0 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_129348 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001EFAB0;
extern int func_1292C8(int a0);
extern int func_128B80(int a0);
extern void func_0D1850(int a0, int a1, int a2, int a3);
extern void func_0D1888(int a0);
extern int func_129348(void);
extern int func_1293E8(void);
extern void func_129688(void);
extern void func_1296E0(int a0);
extern int func_0D1D40(int key, int state, int arg);
extern void func_12BDB0(int *p, int a1);
extern void func_12BDE0(char *record);

void func_0C3AA0(int *o)
{
    if (func_1292C8(1) != 0) {
        func_0D1850(0, func_128B80(0xA73), 0, 0);
        func_0D1888(5);
    } else if (func_129348() != 0) {
        if (D_001EFAB0 != 0) {
            func_1293E8();
            func_129688();
            func_12BDB0(o, 0x16);
        } else {
            func_0D1D40(2, 0xA75, 0x21A);
            func_1293E8();
            func_129688();
            func_1296E0(1);
            func_12BDE0((char *)o);
        }
    } else {
        func_12BDB0(o, 8);
    }
}
