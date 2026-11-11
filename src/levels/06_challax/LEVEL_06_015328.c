/* LEVEL_06:0x015328 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_022058(char *o, int id);
extern void func_0224E0(char *o, char *buf, int id, int n);
extern int func_0235A8(int id, int v);
extern char *func_128B80(int id);
extern char D_0021C568[];
extern int sprintf();
extern void func_0B3890(int a, char *b, int c, int d);

void func_015328(char *o, int id)
{
    char buf[0x40];

    func_022058(o, id);
    func_0224E0(o, buf, id, 0x40);
    if (func_0235A8(id, *(int *)(o + 0xF8))) {
        sprintf(D_0021C568, func_128B80(0x238), buf);
    } else {
        sprintf(D_0021C568, func_128B80(0x237), buf);
    }
    func_0B3890(0, D_0021C568, 0, 0x5A);
}
