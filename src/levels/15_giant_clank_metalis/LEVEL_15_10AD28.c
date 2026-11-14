/* LEVEL_15:0x10AD28 -- runs the level setup helpers in order: loads the first table, registers the record with the pooled block, wires the two linked pairs and finishes with the follow-up. */
extern char D_0015C808[];
extern char D_002EF910[];
extern char D_0016FF88[];
extern char *D_002A8B58;
extern char D_0016FEC8[];
extern char D_002EFA00[];
extern char D_002EF6E0[];
extern int D_002EFA20[];
extern char D_0015C9E8[];

extern void func_13E8D8(char *a0);
extern void func_080488(char *node, int value);
extern void func_0FFDB8(void *d, void *s, int a);
extern void func_129F40(void *d, void *s);
extern void func_11DD10(int *o, void *a1);
extern void func_10ACB8(void);

void func_10AD28(void)
{
    func_13E8D8(D_0015C808);
    func_080488(D_002EF910, (int)D_0016FF88);
    func_0FFDB8(D_002EF910 + 0x1C, D_002A8B58 + 0x410, (int)D_0016FEC8);
    func_129F40(D_002EFA00, D_002EF6E0);
    func_11DD10(D_002EFA20, D_0015C9E8);
    func_10ACB8();
}
