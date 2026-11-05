void func_096F00(int *object, int value)
{
    int previous = object[0];
    object[0] = value;
    object[2] += value - previous;
}
