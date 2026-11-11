/* LEVEL_02:0x0CF978 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00215B70;
extern int func_138FA8(int a0);
extern int func_138860(int a0);
extern void func_0DD8E0(int a0, int a1, int a2, int a3);
extern void func_0DD918(int a0);
extern int func_139028(void);
extern int func_1390C8(void);
extern void func_139368(void);
extern void func_1393C0(int value);
extern void func_13BA90(int *p, int a1);
extern void func_13BAC0(char *record);
extern int func_0DDDD0(int key, int state, int arg);

void func_0CF978(char *obj)
{
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA6F), 0, 0);
        func_0DD918(5);
        return;
    }
    if (func_139028() != 0) {
        if (D_00215B70 != 0) {
            func_1390C8();
            func_139368();
            func_13BA90((int *)obj, 0x14);
        } else {
            func_0DDDD0(2, 0xA72, 0x21A);
            func_1390C8();
            func_139368();
            func_1393C0(1);
            func_13BAC0(obj);
        }
    } else {
        func_13BA90((int *)obj, 8);
    }
}
