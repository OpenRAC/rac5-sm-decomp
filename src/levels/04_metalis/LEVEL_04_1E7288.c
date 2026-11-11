extern char D_00228F08[];
extern void func_1E6DE0(char *record);
extern void func_07AEE0(char *, int, int, int, char *);

void func_1E7288(char *record)
{
    func_1E6DE0(record);
    func_07AEE0(record + 0x2c, 0, 0x44, 0x45, D_00228F08);
}
