/* LEVEL_01:0x015CE0 -- formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_023AB8(char *o, int id);
extern void func_023F40(char *o, char *buf, int id, int n);
extern int func_024EA0(int id, int v);
extern char *func_1324B0(int id);
extern char D_0022F7E8[];
extern int sprintf();
extern void func_0B8F90(int a, char *b, int c, int d);

void func_015CE0(char *o, int id)
{
    char buf[0x40];

    func_023AB8(o, id);
    func_023F40(o, buf, id, 0x40);
    if (func_024EA0(id, *(int *)(o + 0xF8))) {
        sprintf(D_0022F7E8, func_1324B0(0x238), buf);
    } else {
        sprintf(D_0022F7E8, func_1324B0(0x237), buf);
    }
    func_0B8F90(0, D_0022F7E8, 0, 0x5A);
}
