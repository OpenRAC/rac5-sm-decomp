/* LEVEL_08:0x016740 -- placement copy of LEVEL_01_015CE0.c: formats a text line into a 64-byte buffer and submits it, using one of two message ids. */
extern void func_0241D0(char *o, int id);
extern void func_024658(char *o, char *buf, int id, int n);
extern int func_025720(int id, int v);
extern char *func_1439E8(int id);
extern char D_0027EA68[];
extern int sprintf();
extern void func_0C3E80(int a, char *b, int c, int d);

void func_016740(char *o, int id)
{
    char buf[0x40];

    func_0241D0(o, id);
    func_024658(o, buf, id, 0x40);
    if (func_025720(id, *(int *)(o + 0xF8))) {
        sprintf(D_0027EA68, func_1439E8(0x238), buf);
    } else {
        sprintf(D_0027EA68, func_1439E8(0x237), buf);
    }
    func_0C3E80(0, D_0027EA68, 0, 0x5A);
}
