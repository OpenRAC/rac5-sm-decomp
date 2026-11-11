/* LEVEL_07:0x0CB200 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_135C78 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_00214EB0;
extern int func_135BF8(int a0);
extern int func_1354B0(int a0);
extern void func_0D8FB0(int a0, int a1, int a2, int a3);
extern void func_0D8FE8(int a0);
extern int func_135C78(void);
extern int func_135D18(void);
extern void func_135FB8(void);
extern void func_136010(int a0);
extern int func_0D94A0(int key, int state, int arg);
extern void func_1386E0(int *p, int a1);
extern void func_138710(char *record);

void func_0CB200(int *o)
{
    if (func_135BF8(1) != 0) {
        func_0D8FB0(0, func_1354B0(0xA73), 0, 0);
        func_0D8FE8(5);
    } else if (func_135C78() != 0) {
        if (D_00214EB0 != 0) {
            func_135D18();
            func_135FB8();
            func_1386E0(o, 0x16);
        } else {
            func_0D94A0(2, 0xA75, 0x21A);
            func_135D18();
            func_135FB8();
            func_136010(1);
            func_138710((char *)o);
        }
    } else {
        func_1386E0(o, 8);
    }
}
