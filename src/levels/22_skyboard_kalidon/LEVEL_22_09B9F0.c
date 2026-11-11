/* LEVEL_22:0x09B9F0 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_09B8A0. */
extern int func_096C90(int *value);
extern int func_096CC0(char *record);
extern int func_096CF0(int *param_1);
extern int func_096DA8(int *range);
extern void func_09B8A0(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_09B9F0(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_096C90(record);
    second = func_096CC0((char *)record);
    third = func_096CF0(record);
    fourth = func_096DA8(record);
    func_09B8A0(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
