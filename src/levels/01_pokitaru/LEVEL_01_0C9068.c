/* LEVEL_01:0x0C9068 -- screen state step: when the first helper reports a pending request, shows the message (id 0xA6F) and switches to mode 5; otherwise, depending on the second helper and a byte flag, either restarts the object with state 0x14 or opens the 0xA72 dialog and arms the follow-up, or restarts it with state 8. */
extern unsigned char D_00200BB0;
extern int func_132BF8(int a0);
extern int func_1324B0(int a0);
extern void func_0D6F50(int a0, int a1, int a2, int a3);
extern void func_0D6F88(int a0);
extern int func_132C78(void);
extern int func_132D18(void);
extern void func_132FB8(void);
extern void func_133010(int value);
extern void func_1356E0(int *p, int a1);
extern void func_135710(char *record);
extern int func_0D7440(int key, int state, int arg);

void func_0C9068(char *obj)
{
    if (func_132BF8(1) != 0) {
        func_0D6F50(0, func_1324B0(0xA6F), 0, 0);
        func_0D6F88(5);
        return;
    }
    if (func_132C78() != 0) {
        if (D_00200BB0 != 0) {
            func_132D18();
            func_132FB8();
            func_1356E0((int *)obj, 0x14);
        } else {
            func_0D7440(2, 0xA72, 0x21A);
            func_132D18();
            func_132FB8();
            func_133010(1);
            func_135710(obj);
        }
    } else {
        func_1356E0((int *)obj, 8);
    }
}
