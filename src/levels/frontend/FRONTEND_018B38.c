/* FRONTEND:0x018B38 -- screen state step: when the confirm flag is up it shows the message and ends; otherwise it either runs the normal refresh (clearing the pending flags, re-raising the busy flag and drawing screen 0x1F/the default) or, when the retry flag is set, shows the retry dialog (0x1E/0x20 depending on the answer). */
extern unsigned char D_00030454;
extern unsigned char D_00027E50;
extern unsigned char D_00030438;
extern int func_0205B8(int a);
extern int func_01F778(int id);
extern void func_0140E0(int a, int b, int c, int d);
extern void func_014118(int a);
extern int func_020668(void);
extern int func_021188(void);
extern void func_020750(void);
extern int func_0158B0(void);
extern int func_001B40(int a0, int a1);
extern int func_0145C8(int index);
extern void func_0229A0(int *p, int a1);
extern int func_015308(int key, int state, int arg);
extern void func_020988(void);
extern int func_0206D8(void);
extern int func_0208C8(void);
extern void func_0209E0(int value);
extern void func_0229D0(int *p);

void func_018B38(int *p)
{
    if (func_0205B8(1) != 0) {
        func_0140E0(0, func_01F778(0xA5D), 0, 0);
        func_014118(5);
        return;
    }
    if (func_020668() == 0) {
        if (func_021188() != 0) {
            D_00030454 = 0;
            func_020750();
            func_0158B0();
        }
        D_00027E50 = 0;
        func_020750();
        func_001B40(1, 1);
        func_0145C8(1);
        if (D_00030438 != 0) {
            func_0229A0(p, 0x1F);
        }
    } else {
        func_015308(2, 0xA82, 0x21A);
        func_020988();
        func_0206D8();
        if (func_0208C8() != 0) {
            func_0229A0(p, 0x20);
        } else {
            func_0229A0(p, 0x1E);
        }
        func_0209E0(1);
        return;
    }
    func_0209E0(1);
    if (D_00030438 == 0) {
        func_0229D0(p);
    }
}
