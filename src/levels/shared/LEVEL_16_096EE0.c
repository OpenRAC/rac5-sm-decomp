void func_096EE0(int *object, int value)
{
    int previous = object[2];
    object[2] = value;
    object[0] += value - previous;
}
