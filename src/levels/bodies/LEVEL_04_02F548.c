extern int SignalSema(int);

void func_02F548(int *value)
{
    int id = *value;
    if (id >= 0)
        SignalSema(id);
}
