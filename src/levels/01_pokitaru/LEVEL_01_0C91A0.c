/* LEVEL_01:0x0C91A0 -- picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_132C78 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00200BB0;
extern int func_132BF8(int a0);
extern int func_1324B0(int a0);
extern void func_0D6F50(int a0, int a1, int a2, int a3);
extern void func_0D6F88(int a0);
extern int func_132C78(void);
extern int func_132D18(void);
extern void func_132FB8(void);
extern void func_133010(int a0);
extern int func_0D7440(int key, int state, int arg);
extern void func_1356E0(int *p, int a1);
extern void func_135710(char *record);

void func_0C91A0(int *o)
{
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA73), 0, 0);
        func_0D6F88(5);
    } else if (func_132C78() != 0) {
        if (D_00200BB0 != 0) {
            func_132D18();
            func_132FB8();
            func_1356E0(o, 0x16);
        } else {
            func_0D7440(2, 0xA75, 0x21A);
            func_132D18();
            func_132FB8();
            func_133010(1);
            func_135710((char *)o);
        }
    } else {
        func_1356E0(o, 8);
    }
}
