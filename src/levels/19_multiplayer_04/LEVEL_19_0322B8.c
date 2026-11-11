void func_0322B8(unsigned short *array, int index, int limit, unsigned short value)
{
    int parent = (index - 1) / 2;
    while (limit < index && array[parent] < value) {
        array[index] = array[parent];
        index = parent;
        parent = (index - 1) / 2;
    }
    array[index] = value;
}
