/* LEVEL_21:0x0138C8 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_01DF40(char *o, int id);
extern void func_01E3C8(char *o, char *buf, int id, int n);
extern int func_01F208(int id, int v);
extern char *func_0F1378(int id);
extern char D_00177968[];
extern int sprintf();
extern void func_099600(int a, char *b, int c, int d);

void func_0138C8(char *o, int id)
{
    char buf[0x40];

    func_01DF40(o, id);
    func_01E3C8(o, buf, id, 0x40);
    if (func_01F208(id, *(int *)(o + 0xF8))) {
        sprintf(D_00177968, func_0F1378(0x238), buf);
    } else {
        sprintf(D_00177968, func_0F1378(0x237), buf);
    }
    func_099600(0, D_00177968, 0, 0x5A);
}
