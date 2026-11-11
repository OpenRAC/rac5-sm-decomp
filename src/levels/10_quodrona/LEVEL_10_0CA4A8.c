/* LEVEL_10:0x0CA4A8 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00209BB0;
extern int func_130A58(int a0);
extern int func_130310(int a0);
extern void func_0D8390(int a0, int a1, int a2, int a3);
extern void func_0D83C8(int a0);
extern int func_130AD8(void);
extern int func_130B78(void);
extern void func_130E18(void);
extern void func_130E70(int value);
extern void func_133560(int *p, int a1);
extern void func_133590(char *record);
extern int func_0D8880(int key, int state, int arg);

void func_0CA4A8(char *obj)
{
    if (func_130A58(1) != 0) {
        func_0D8390(0, func_130310(0xA6F), 0, 0);
        func_0D83C8(5);
        return;
    }
    if (func_130AD8() != 0) {
        if (D_00209BB0 != 0) {
            func_130B78();
            func_130E18();
            func_133560((int *)obj, 0x14);
        } else {
            func_0D8880(2, 0xA72, 0x21A);
            func_130B78();
            func_130E18();
            func_130E70(1);
            func_133590(obj);
        }
    } else {
        func_133560((int *)obj, 8);
    }
}
