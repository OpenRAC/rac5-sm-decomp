/* LEVEL_01:0x036DB0 -- placement copy of LEVEL_02_03B7F8.c. */
void func_036DB0(unsigned short *array, int index, int limit, unsigned short value)
{
    int parent = (index - 1) / 2;
    while (limit < index && array[parent] < value) {
        array[index] = array[parent];
        index = parent;
        parent = (index - 1) / 2;
    }
    array[index] = value;
}
