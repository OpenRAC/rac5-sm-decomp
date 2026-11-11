/* LEVEL_07:0x0AF3E0 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0AF290. */
extern int func_0AA680(int *value);
extern int func_0AA6B0(char *record);
extern int func_0AA6E0(int *param_1);
extern int func_0AA798(int *range);
extern void func_0AF290(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0AF3E0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0AA680(record);
    second = func_0AA6B0((char *)record);
    third = func_0AA6E0(record);
    fourth = func_0AA798(record);
    func_0AF290(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
