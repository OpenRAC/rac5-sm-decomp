extern unsigned int func_0C6150(void);
extern unsigned char D_001B2DA4;
extern unsigned char D_001B2DA5;
extern void func_125A10(int);
extern void func_10BB20(int);
extern void func_125A08(int);
extern void func_0C6428(int);
extern void func_018B98(int, int);
extern void func_0C6680(int);

void func_0C5390(void)
{
    switch (func_0C6150()) {
    case 2:
        func_0C6428(0);
        break;
    case 1:
        if (D_001B2DA4 != 0) {
            func_125A10(0);
        } else if (D_001B2DA5 != 0) {
            func_10BB20(0);
            func_125A08(0);
        }
        func_0C6428(0);
        func_018B98(4, 0);
        break;
    case 0:
    default:
        func_0C6680(2);
        break;
    }
}
