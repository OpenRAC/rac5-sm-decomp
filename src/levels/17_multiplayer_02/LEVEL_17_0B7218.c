/* LEVEL_17:0x0B7218 -- placement copy of LEVEL_01_0C9068.c: screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_001A2228;
extern int func_10EFF0(int a0);
extern int func_10E8A8(int a0);
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern void func_0C5BC0(int a0);
extern int func_10F070(void);
extern int func_10F110(void);
extern void func_10F2E8(void);
extern void func_10F310(int value);
extern void func_111328(int *p, int a1);
extern void func_111358(char *record);
extern int func_0C6078(int key, int state, int arg);

void func_0B7218(char *obj)
{
    if (func_10EFF0(1) != 0) {
        func_0C5B88(0, func_10E8A8(0xA6F), 0, 0);
        func_0C5BC0(5);
        return;
    }
    if (func_10F070() != 0) {
        if (D_001A2228 != 0) {
            func_10F110();
            func_10F2E8();
            func_111328((int *)obj, 0x14);
        } else {
            func_0C6078(2, 0xA72, 0x21A);
            func_10F110();
            func_10F2E8();
            func_10F310(1);
            func_111358(obj);
        }
    } else {
        func_111328((int *)obj, 8);
    }
}
