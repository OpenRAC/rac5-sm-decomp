/* LEVEL_04:0x0CE880 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_0021A070;
extern int func_13F078(int a0);
extern int func_13E930(int a0);
extern void func_0DC800(int a0, int a1, int a2, int a3);
extern void func_0DC838(int a0);
extern int func_13F0F8(void);
extern int func_13F198(void);
extern void func_13F438(void);
extern void func_13F490(int value);
extern void func_141B60(int *p, int a1);
extern void func_141B90(char *record);
extern int func_0DCD00(int key, int state, int arg);

void func_0CE880(char *obj)
{
    if (func_13F078(1) != 0) {
        func_0DC800(0, func_13E930(0xA6F), 0, 0);
        func_0DC838(5);
        return;
    }
    if (func_13F0F8() != 0) {
        if (D_0021A070 != 0) {
            func_13F198();
            func_13F438();
            func_141B60((int *)obj, 0x14);
        } else {
            func_0DCD00(2, 0xA72, 0x21A);
            func_13F198();
            func_13F438();
            func_13F490(1);
            func_141B90(obj);
        }
    } else {
        func_141B60((int *)obj, 8);
    }
}
