/* LEVEL_09:0x015EA0 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_022C48(char *o, int id);
extern void func_0230D0(char *o, char *buf, int id, int n);
extern int func_024198(int id, int v);
extern char *func_12B448(int id);
extern char D_00216F68[];
extern int sprintf();
extern void func_0B6240(int a, char *b, int c, int d);

void func_015EA0(char *o, int id)
{
    char buf[0x40];

    func_022C48(o, id);
    func_0230D0(o, buf, id, 0x40);
    if (func_024198(id, *(int *)(o + 0xF8))) {
        sprintf(D_00216F68, func_12B448(0x238), buf);
    } else {
        sprintf(D_00216F68, func_12B448(0x237), buf);
    }
    func_0B6240(0, D_00216F68, 0, 0x5A);
}
