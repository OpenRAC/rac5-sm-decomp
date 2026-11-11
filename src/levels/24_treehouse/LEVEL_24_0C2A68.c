/* LEVEL_24:0x0C2A68 -- placement copy of LEVEL_01_0C91A0.c: picks the follow-up for the object from the current mode: in mode 1 it starts the sound 0xA73 and the step 5; when func_128778 accepts it runs the flagged or the default setup (0x16 or the 0xA75 request, then the shared steps), and otherwise it asks for request 8. */
extern unsigned char D_001D1830;
extern int func_1286F8(int a0);
extern int func_127FB0(int a0);
extern void func_0D08A8(int a0, int a1, int a2, int a3);
extern void func_0D08E0(int a0);
extern int func_128778(void);
extern int func_128818(void);
extern void func_128AB8(void);
extern void func_128B10(int a0);
extern int func_0D0DA8(int key, int state, int arg);
extern void func_12B1E0(int *p, int a1);
extern void func_12B210(char *record);

void func_0C2A68(int *o)
{
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA73), 0, 0);
        func_0D08E0(5);
    } else if (func_128778() != 0) {
        if (D_001D1830 != 0) {
            func_128818();
            func_128AB8();
            func_12B1E0(o, 0x16);
        } else {
            func_0D0DA8(2, 0xA75, 0x21A);
            func_128818();
            func_128AB8();
            func_128B10(1);
            func_12B210((char *)o);
        }
    } else {
        func_12B1E0(o, 8);
    }
}
