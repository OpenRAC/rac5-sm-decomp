/* LEVEL_02:0x0DBA28 -- placement copy of LEVEL_01_0D5098.c: calls four local helpers in sequence, the third with a data address. */
extern int func_13A320(void);
extern void func_0ACD58(void);
extern void func_001088(int, int, int);
extern void func_041038(void *);
extern int func_0BC930(int);
extern char D_00003008[];

void func_0DBA28(void)
{
    func_13A320();
    func_0ACD58();
    func_001088(0, (int)D_00003008, 0);
    func_041038((void *)1);
    func_0BC930(7);
}
