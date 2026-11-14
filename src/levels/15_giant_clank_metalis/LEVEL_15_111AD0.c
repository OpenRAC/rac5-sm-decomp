/* LEVEL_15:0x111AD0 -- initialises the global record: sets it up, registers the first handler, links it to the shared source with the second handler, and runs the follow-up. */
extern char D_0015CF90[];
extern char D_002F0A68[];
extern char *D_002A8B58;

extern void func_13E8D8(char *a0);
extern void func_080488(char *o, int value);
extern void func_0FFDB8(char *d, char *s, int a);
extern void func_111A60(void);
extern void func_170360(void);
extern void func_1702F0(void);

void func_111AD0(void)
{
    char *g;

    func_13E8D8(D_0015CF90);
    g = D_002F0A68;
    func_080488(g, (int)func_170360);
    func_0FFDB8(g + 0x1C, D_002A8B58 + 0x9C, (int)func_1702F0);
    func_111A60();
}
