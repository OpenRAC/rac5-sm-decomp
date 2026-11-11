/* LEVEL_02:0x0CF3D0 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_00215B70;
extern unsigned char D_00215B88;
extern unsigned char D_00215B90;
extern int func_138FA8(int a);
extern int func_138860(int a);
extern void func_0DD8E0(int a, int b, int c, int d);
extern void func_0DD918(int a);
extern int func_139058(void);
extern int func_139B98(void);
extern int func_139140(void);
extern int func_0DE3F0(void);
extern void func_13BA90(int *p, int a1);
extern void func_1393C0(int value);
extern void func_13BAC0(char *record);
extern void func_139368(void);
extern int func_1390C8(void);
extern int func_0DDDD0(int key, int state, int arg);

void func_0CF3D0(int *self)
{
    if (func_138FA8(1) != 0) {
        func_0DD8E0(0, func_138860(0xA5D), 0, 0);
        func_0DD918(5);
        return;
    }
    if (func_139058() == 0) {
        if (func_139B98() != 0) {
            D_00215B90 = 0;
            func_139140();
            func_0DE3F0();
        }
        if (D_00215B70 != 0) {
            func_13BA90(self, 0x1F);
        }
    } else if (D_00215B70 != 0) {
        func_139368();
        func_1390C8();
        func_13BA90(self, 0x12);
        return;
    } else {
        func_0DDDD0(2, 0xA5F, 0x21A);
        D_00215B88 = 1;
        func_139368();
        func_1390C8();
        func_13BA90(self, 0x1E);
        func_1393C0(1);
        return;
    }
    func_1393C0(1);
    if (D_00215B70 == 0) {
        func_13BAC0((char *)self);
    }
}
