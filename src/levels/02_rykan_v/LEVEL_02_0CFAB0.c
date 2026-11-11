/* LEVEL_02:0x0CFAB0 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_139028 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00215B70;
extern int func_138FA8(int a0);
extern int func_138860(int a0);
extern void func_0DD8E0(int a0, int a1, int a2, int a3);
extern void func_0DD918(int a0);
extern int func_139028(void);
extern int func_1390C8(void);
extern void func_139368(void);
extern void func_1393C0(int a0);
extern int func_0DDDD0(int key, int state, int arg);
extern void func_13BA90(int *p, int a1);
extern void func_13BAC0(char *record);

void func_0CFAB0(int *o)
{
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA73), 0, 0);
        func_0DD918(5);
    } else if (func_139028() != 0) {
        if (D_00215B70 != 0) {
            func_1390C8();
            func_139368();
            func_13BA90(o, 0x16);
        } else {
            func_0DDDD0(2, 0xA75, 0x21A);
            func_1390C8();
            func_139368();
            func_1393C0(1);
            func_13BAC0((char *)o);
        }
    } else {
        func_13BA90(o, 8);
    }
}
