/* LEVEL_23:0x0BF860 -- placement copy of LEVEL_01_0C8AC0.c: frontend-style state dispatcher for the object: when the first query succeeds it starts the message sequence; otherwise, depending on the second query and the global state byte, it runs one of three sequences (reset and follow-up with the 0x1F code, the 0x12 code, or the 0x21A-prompt sequence with the 0x1E code), the first one continuing into the shared tail that notifies the record when the state byte is clear. */
extern unsigned char D_001D3FB0;
extern unsigned char D_001D3FC8;
extern unsigned char D_001D3FD0;
extern int func_124370(int a);
extern int func_123C28(int a);
extern void func_0CDD80(int a, int b, int c, int d);
extern void func_0CDDB8(int a);
extern int func_124420(void);
extern int func_124F60(void);
extern int func_124508(void);
extern int func_0CE890(void);
extern void func_126E58(int *p, int a1);
extern void func_124788(int value);
extern void func_126E88(char *record);
extern void func_124730(void);
extern int func_124490(void);
extern int func_0CE270(int key, int state, int arg);

void func_0BF860(int *self)
{
    if (func_124370(1) != 0) {
        func_0CDD80(0, func_123C28(0xA5D), 0, 0);
        func_0CDDB8(5);
        return;
    }
    if (func_124420() == 0) {
        if (func_124F60() != 0) {
            D_001D3FD0 = 0;
            func_124508();
            func_0CE890();
        }
        if (D_001D3FB0 != 0) {
            func_126E58(self, 0x1F);
        }
    } else if (D_001D3FB0 != 0) {
        func_124730();
        func_124490();
        func_126E58(self, 0x12);
        return;
    } else {
        func_0CE270(2, 0xA5F, 0x21A);
        D_001D3FC8 = 1;
        func_124730();
        func_124490();
        func_126E58(self, 0x1E);
        func_124788(1);
        return;
    }
    func_124788(1);
    if (D_001D3FB0 == 0) {
        func_126E88((char *)self);
    }
}
