/* LEVEL_16:0x09BAD0 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_09B980. */
extern int func_096D10(int *value);
extern int func_096D40(char *record);
extern int func_096D70(int *param_1);
extern int func_096E28(int *range);
extern void func_09B980(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_09BAD0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_096D10(record);
    second = func_096D40((char *)record);
    third = func_096D70(record);
    fourth = func_096E28(record);
    func_09B980(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
