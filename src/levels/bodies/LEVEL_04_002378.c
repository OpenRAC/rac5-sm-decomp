extern void func_002338(void);
extern void func_002A58(unsigned int);
extern void func_0016A8(int);
extern void func_000E08(int);

void func_002378(void)
{
    unsigned int index = 0;
    func_002338();
    do {
        func_002A58(index);
        index++;
    } while (index < 2);
    func_0016A8(0);
    func_000E08(0);
}
