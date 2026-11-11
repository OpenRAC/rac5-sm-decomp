/* LEVEL_23:0x0BFE08 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001D3FB0;
extern int func_124370(int a0);
extern int func_123C28(int a0);
extern void func_0CDD80(int a0, int a1, int a2, int a3);
extern void func_0CDDB8(int a0);
extern int func_1243F0(void);
extern int func_124490(void);
extern void func_124730(void);
extern void func_124788(int value);
extern void func_126E58(int *p, int a1);
extern void func_126E88(char *record);
extern int func_0CE270(int key, int state, int arg);

void func_0BFE08(char *obj)
{
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA6F), 0, 0);
        func_0CDDB8(5);
        return;
    }
    if (func_1243F0() != 0) {
        if (D_001D3FB0 != 0) {
            func_124490();
            func_124730();
            func_126E58((int *)obj, 0x14);
        } else {
            func_0CE270(2, 0xA72, 0x21A);
            func_124490();
            func_124730();
            func_124788(1);
            func_126E88(obj);
        }
    } else {
        func_126E58((int *)obj, 8);
    }
}
