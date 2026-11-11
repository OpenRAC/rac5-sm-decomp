extern int SignalSema(int);

void func_02D758(int *value)
{
    int id = *value;
    if (id >= 0)
        SignalSema(id);
}
