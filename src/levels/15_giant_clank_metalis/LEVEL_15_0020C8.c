extern void func_002088(void);
extern void func_0027A8(unsigned int);
extern void func_0013F8(int);
extern void func_000B58(int);

void func_0020C8(void)
{
    unsigned int index = 0;
    func_002088();
    do {
        func_0027A8(index);
        index++;
    } while (index < 2);
    func_0013F8(0);
    func_000B58(0);
}
