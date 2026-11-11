extern void func_0B0B88(int, unsigned int);
extern void func_0B0A40(int, int);
extern void func_0B0900(int, int);
extern void func_0B2918(int, unsigned int);

void func_0B0798(int value)
{
    int index = 0;

    do {
        func_0B0B88(index, value);
        func_0B0A40(index, value);
        func_0B0900(index, value);
        func_0B2918(index, value);
        ++index;
    } while (index == 0);
}
