extern int SignalSema(int);

void func_030020(int *value)
{
    int id = *value;
    if (id >= 0)
        SignalSema(id);
}
