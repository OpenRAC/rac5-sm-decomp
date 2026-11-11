extern unsigned int func_0D6A58(void);
extern unsigned char D_00204EF4;
extern unsigned char D_00204EF5;
extern void func_135FA0(int);
extern void func_12ECE0(int);
extern void func_135F98(int);
extern void func_0D6D30(int);
extern void func_01A828(int, int);
extern void func_0D6F88(int);

void func_0D5C98(int unused)
{
    switch (func_0D6A58()) {
    case 2:
        func_0D6D30(0);
        break;
    case 1:
        if (D_00204EF4 != 0) {
            func_135FA0(0);
        } else if (D_00204EF5 != 0) {
            func_12ECE0(0);
            func_135F98(0);
        }
        func_0D6D30(0);
        func_01A828(4, 0);
        break;
    case 0:
    default:
        func_0D6F88(2);
        break;
    }
}
