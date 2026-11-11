/* LEVEL_24:0x0C27F8 -- placement copy of LEVEL_01_0C8F30.c: menu step: the first answer starts a message sequence, the second picks one of two confirm sequences depending on a global flag, otherwise a plain refresh runs on the object. */
extern unsigned char D_001D1830;

extern int func_1286F8(int arg);
extern int func_127FB0(int id);
extern void func_0D08A8(int a, int b, int c, int d);
extern void func_0D08E0(int a);
extern int func_128778(void);
extern int func_128818(void);
extern void func_128AB8(void);
extern void func_12B1E0(int *p, int a1);
extern int func_0D0DA8(int key, int state, int arg);
extern void func_128B10(int value);
extern void func_12B210(char *record);

void func_0C27F8(int *o)
{
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA57), 0, 0);
        func_0D08E0(5);
    } else if (func_128778() != 0) {
        if (D_001D1830 != 0) {
            func_128818();
            func_128AB8();
            func_12B1E0(o, 0x15);
        } else {
            func_0D0DA8(2, 0xA58, 0x21A);
            func_128818();
            func_128AB8();
            func_128B10(1);
            func_12B210((char *)o);
        }
    } else {
        func_128B10(1);
        func_12B1E0(o, 0x1D);
    }
}
