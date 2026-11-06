extern char D_00259208[];
extern void func_20E9B0(void);
extern void func_07FA60(char *, int, int, int, char *);

void func_20EE58(char *record)
{
    func_20E9B0();
    func_07FA60(record + 0x2c, 0, 0x44, 0x45, D_00259208);
}
