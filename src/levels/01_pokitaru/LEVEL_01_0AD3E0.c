/* LEVEL_01:0x0AD3E0 -- reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_0AD290. */
extern int func_0A8680(int *value);
extern int func_0A86B0(char *record);
extern int func_0A86E0(int *param_1);
extern int func_0A8798(int *range);
extern void func_0AD290(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0AD3E0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_0A8680(record);
    second = func_0A86B0((char *)record);
    third = func_0A86E0(record);
    fourth = func_0A8798(record);
    func_0AD290(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
