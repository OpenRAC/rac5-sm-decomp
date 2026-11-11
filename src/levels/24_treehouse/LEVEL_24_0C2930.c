/* LEVEL_24:0x0C2930 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001D1830;
extern int func_1286F8(int a0);
extern int func_127FB0(int a0);
extern void func_0D08A8(int a0, int a1, int a2, int a3);
extern void func_0D08E0(int a0);
extern int func_128778(void);
extern int func_128818(void);
extern void func_128AB8(void);
extern void func_128B10(int value);
extern void func_12B1E0(int *p, int a1);
extern void func_12B210(char *record);
extern int func_0D0DA8(int key, int state, int arg);

void func_0C2930(char *obj)
{
    if (func_1286F8(1) != 0) {
        func_0D08A8(0, func_127FB0(0xA6F), 0, 0);
        func_0D08E0(5);
        return;
    }
    if (func_128778() != 0) {
        if (D_001D1830 != 0) {
            func_128818();
            func_128AB8();
            func_12B1E0((int *)obj, 0x14);
        } else {
            func_0D0DA8(2, 0xA72, 0x21A);
            func_128818();
            func_128AB8();
            func_128B10(1);
            func_12B210(obj);
        }
    } else {
        func_12B1E0((int *)obj, 8);
    }
}
