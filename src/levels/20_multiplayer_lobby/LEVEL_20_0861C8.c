/* LEVEL_20:0x0861C8 -- placement copy of LEVEL_01_0AD3E0.c: reads four 16-bit fields of a record through the accessor helpers and forwards them with unit scales and the remaining arguments to func_086078. */
extern int func_081408(int *value);
extern int func_081438(char *record);
extern int func_081468(int *param_1);
extern int func_081520(int *range);
extern void func_086078(int index, short first, short second, unsigned short third, float fa, float fb, unsigned short fourth, int fifth, int sixth, int seventh, int eighth, float fc);

void func_0861C8(int index, int *record, int fifth, int sixth, int seventh, int eighth, float fc)
{
    short first;
    short second;
    unsigned short third;
    unsigned short fourth;

    first = func_081408(record);
    second = func_081438((char *)record);
    third = func_081468(record);
    fourth = func_081520(record);
    func_086078(index, first, second, third, 1.0f, 1.0f, fourth, fifth, sixth, seventh, eighth, fc);
}
