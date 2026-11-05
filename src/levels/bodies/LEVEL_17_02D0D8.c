extern int SignalSema(int);

void func_02D0D8(int *value)
{
    int id = *value;
    if (id >= 0)
        SignalSema(id);
}
