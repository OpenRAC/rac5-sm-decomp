/* LEVEL_03:0x0AD160 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0AD010. */
extern int func_0A8400(int *value);
extern int func_0A8430(char *record);
extern int func_0A8460(int *param_1);
extern int func_0A8518(int *range);
extern void func_0AD010(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0AD160(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0A8400(record);
    second = func_0A8430((char *)record);
    third = func_0A8460(record);
    fourth = func_0A8518(record);
    func_0AD010(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
