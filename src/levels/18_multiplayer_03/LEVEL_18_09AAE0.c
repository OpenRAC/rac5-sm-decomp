/* LEVEL_18:0x09AAE0 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_09A990. */
extern int func_095D20(int *value);
extern int func_095D50(char *record);
extern int func_095D80(int *param_1);
extern int func_095E38(int *range);
extern void func_09A990(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_09AAE0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_095D20(record);
    second = func_095D50((char *)record);
    third = func_095D80(record);
    fourth = func_095E38(record);
    func_09A990(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
