/* LEVEL_07:0x077B88 -- placement copy of LEVEL_01_075998.c: lazily registers three handlers and stores their ids. */
extern int D_0020A3D4;
extern int D_0020A3D8;
extern int D_0020A3DC;
extern int D_002AD6DC;
extern int D_002AD77C;
extern void func_077FF0(void);
extern void func_077F98(void);
extern void func_079738(void);
extern void func_079350(void);
extern void func_078B30(void);
extern void func_078A90(void);
extern void func_0987D0(char *buf, unsigned a, void (*f)(void), int size, int b, int c, void (*g)(void));
extern int func_0989A8(char *buf);
void func_077B88(void)
{
    char buf[16];
    if (D_0020A3D4 < 0) {
        func_0987D0(buf, (D_002AD6DC << 16) | 0xB0007059, func_077FF0, 0x1C, 0, -1, func_077F98);
        D_0020A3D4 = func_0989A8(buf);
    }
    if (D_0020A3D8 < 0) {
        func_0987D0(buf, (D_002AD6DC << 16) | 0x98007059, func_079738, 0x44, 0, -1, func_079350);
        D_0020A3D8 = func_0989A8(buf);
    }
    if (D_0020A3DC < 0) {
        func_0987D0(buf, (D_002AD77C << 16) | 0x88007059, func_078B30, 0x1C, 0, -1, func_078A90);
        D_0020A3DC = func_0989A8(buf);
    }
}
